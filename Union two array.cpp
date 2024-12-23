#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n;
    cin>>m;
    int a1[m];
    for(int i = 0; i < m; i++) cin >> a1[i];
    cin >> n;
    int a2[n];
    for(int i = 0; i < n; i++) cin >> a2[i];

    set<int>st;
    for( int i = 0; i < m; i++ ) st.insert(a1[i]);
    for( int i = 0; i < n; i++ ) st.insert(a2[i]);

    vector<int> unionn;
    for( auto it : st )
    {
        unionn.push_back(it);
    }

    for( int i = 0; i < unionn.size(); i++ ) cout<< unionn[i] <<" ";
}
