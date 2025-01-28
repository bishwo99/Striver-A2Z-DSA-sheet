#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++) cin >> nums[i];
    vector<int>pv;
    vector<int>nv;
    for(int i = 0; i < n; i++)
    {
        if(nums[i]>0) pv.push_back(nums[i]);
        else
        nv.push_back(nums[i]);
    }
    vector<int>res(n);
    
        for(int i = 0; i<n/2; i++)
            {
                     
                    res[i*2] = pv[i];
                    
            }
        for(int i = 0; i < n/2; i++)
        {
           
           res[2*i + 1] = nv[i];
        
        }    

        for(int i = 0; i < n; i++) cout << res[i] <<" ";
        
    

}