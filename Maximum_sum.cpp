// You are given an integer array arr[].
// You need to find the maximum sum of a subarray 
// (containing at least one element) in the array arr[].

// Note : A subarray is a continuous part of an array. 

// Input: arr[] = [2, 3, -8, 7, -1, 2, 3]
// Output: 11
// Explanation: The subarray [7, -1, 2, 3] has the largest sum 11.
#include<iostream>
using namespace std;

int main(){
  int arr[7] = {2,3,-8,7,-1,2,3};
  
  // Way 1 with time complexity - O(n^2)
  int maxi = 0;
  int n = 7;
  for(int i = 0; i < n; i++){
    int prefix = 0;
    for(int j = i; j < n; j++){
    prefix+=arr[j];
    maxi = max(maxi,prefix);
    }
  }
cout << "Maximum sum of contigous subarray is: " << maxi << endl;

maxi = 0;
int prefix = 0;
// Way-2 with time complexity O(n)
for(int i = 0; i < n; i++){
  prefix += arr[i];
  maxi = max(prefix,maxi);
  if(prefix < 0){
    prefix = 0;
  }
}
cout << "Maximum sum of continous sub array is: " << maxi;
}

