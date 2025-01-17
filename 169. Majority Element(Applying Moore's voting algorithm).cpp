#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n; 
    vector<int> nums(n);
    for(int i = 0; i < n; i++) cin >> nums[i];
    // Moore's voting algorithm
    int cnt = 0;
    int el;
    for(int i = 0; i < n; i++)
    {
        if(cnt == 0)
        {
            cnt = 1;
            el = nums[i];
        }
        else if(el == nums[i]) cnt ++;
        else 
        cnt --;
    }
   int cnt1 = 0;
   for(int i = 0; i < n; i++)
   {
    
    if(el == nums[i]) cnt1++;
   }
    if(cnt1 > n/2) 
    {
        cout << "Major element is:" << el;
       
    }
   else 
   cout <<"There is no major element";
   



}
