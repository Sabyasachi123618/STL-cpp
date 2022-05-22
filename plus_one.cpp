vector<int> increment(vector<int> arr ,int N) {
        // code here
        int c=0;
        for(int i=N-1;i>=0;i--)
        {
           if(i==N-1)
           {
               if(arr[i]==9)
               {
                   arr[i]=0;
                   c=1;
               }
               else
               {
                   arr[i]=arr[i]+1+c;
                   c=0;
               }
           }
           else
           {
                   if(arr[i]==9 and c==1)
                   {
                       arr[i]=0;
                       c=1;
                   }
                   else
                   {
                        arr[i]=arr[i]+c;
                        c=0;
                   }
           }
        }
        if(c==1)
        arr.insert(arr.begin(),1);
        return arr;
    }
