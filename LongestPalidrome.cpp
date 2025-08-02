// Given a string s which consists of lowercase or uppercase letters, 
// return the length of the longest palindrome that can be built with those letters.
// Letters are case sensitive, for example, "Aa" is not considered a palindrome.
// Input: s = "abccccdd"
// Output: 7
// Explanation: One longest palindrome that can be built is "dccaccd", whose length is 7.

#include<iostream>
#include<vector>
using namespace std;

int main(){
  string s;
  cin >> s;

  vector<int>lower(26,0);
  vector<int>upper(26,0);

  for(int i = 0; i < s.size(); i++){
    if(s[i] >= 'a' && s[i] <= 'z'){
      lower[s[i] - 'a']++;
    }
    else{
      upper[s[i] - 'A']++;
    }
  }

  int ans = 0;
  int odd = 0;
  for(int i = 0; i < 26; i++){
    if(lower[i] % 2 == 0){
      ans+=lower[i];
    }
    else{
      ans += lower[i] - 1;
      odd = 1;
    }
  }

  for(int i = 0; i < 26; i++){
    if(upper[i] % 2 == 0){
      ans+=upper[i];
    }
    else{
      ans += upper[i] - 1;
      odd = 1;
    }
  }

  cout << "Longest Palindrome: " << ans + odd << endl;
}