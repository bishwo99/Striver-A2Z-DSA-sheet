#include<bits/stdc++.h>
#include<iostream>
using namespace std;
 void RotateArray(vector<int>&nums, int n, int k){
   k = k % n;

   vector<int> tmp(k);

   for(int i = 0; i < k; i++)
   {
      tmp[i] = nums[i+(n-k)];
   }

    for( int i = n-1 ; i>= k; i-- )
    {
      nums[i] = nums[i-k];
    }
    for( int i = 0; i < k; i++ )
    {
        nums[i] = tmp[i];
    }

 }


int main()
{
     int n;
     cin>>n;
     vector<int> nums(n);
     for(int i=0;i<n;i++) cin>> nums[i];
     int k;
     cin>>k;
     RotateArray(nums,n,k);
     for(int i=0;i<n;i++) cout<<nums[i]<<" ";
}
