#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    for(int i=0;i<n;i++)
    {
        sort(v.begin(),v.end());
    }
    int c=1;
    int low = 0;
    int high = n;
    if( n != v[n])
    {
        for(int i=1; i<n; i++)
        {

            if(v[i] == c)
            {
                c++;
            }

            else if(v[i]!=c)
            {
                cout<<c;
                break;
            }
        }

    }
    else
        cout<<n;

}
