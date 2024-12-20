
  int k=0;
  for(int i=1;i<arr.size();i++)
  {
      if(arr[i]!=arr[k])
      {
         k++;
          arr[k] = arr[i];
         

      }

  }

return k+1;
