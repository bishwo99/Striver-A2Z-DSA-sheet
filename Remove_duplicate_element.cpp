
  int k=0;
  for(int i=1;i<arr.size();i++)
  {
      if(arr[i]!=arr[k])
      {
          arr[k+1] = arr[i];
          k++;

      }

  }

return k+1;
