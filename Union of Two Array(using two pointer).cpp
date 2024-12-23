#include<bits/stdc++.h>
using namespace std;
int main()
{
  // optimal solution; TC = O(n1+n2);
  int n1;
  cin>>n1;
  int a[n1];
  for( int i = 0; i < n1; i++ ) cin >> a[i];
  int n2;
  cin>>n2;
  int b[n2];
  for( int i = 0; i < n2; i++ ) cin >> b[i];

  vector<int> unionArray;
  int i = 0;
  int j = 0;
  while( i < n1 && j < n2 ){

     if( a[i] <= b[j] ){
        if(unionArray.size() == 0 || unionArray.back() != a[i]){
            unionArray.push_back(a[i]);
        }
        i++;
    }

       else {
           if (unionArray.size() == 0 || unionArray.back() != b[j]){
            unionArray.push_back(b[j]);
        }
        j++;
    }
  }



  while( i<n1 ){
    if( a[i] <= b[j] ){
        if(unionArray.size() == 0 || unionArray.back() != a[i]){
            unionArray.push_back(a[i]);
        }
        i++;
    }
  }

  while( j<n2 ){

        if(unionArray.size() == 0 || unionArray.back() != b[j]){
            unionArray.push_back(b[j]);
        }
        j++;
    }

  for(int i=0; i<unionArray.size(); i++){
    cout<<unionArray[i]<<" ";
  }

}



