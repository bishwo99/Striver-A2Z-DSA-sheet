#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int k;
    cin>>k;

    int low = 0;
    int high = n-1;

    bool findd = false;
    while(low<=high)
    {
        int mid = (low + high)/2;
        if(arr[mid] == k)
        {
            cout<< mid;
            findd = true;
            break;
        }
        else if(arr[mid]<k)
            low = mid + 1;
        else
            high = mid -1;

    }
    if(!findd) cout<<"Sir,This element doesn't exist";



}
