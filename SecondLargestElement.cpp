class Solution {
  public:

    int getSecondLargest(vector<int> &arr) {
      int FL = arr[0];
      int SL = -1;
      for(int i=0;i<arr.size();i++)
      {
          if(arr[i] > FL)
          {
              SL = FL;
              FL = arr[i];
          }
          else if( arr[i] < FL && arr[i] > SL )
      {
          SL = arr[i];
      }
      
      }
      return SL;
    }
};
