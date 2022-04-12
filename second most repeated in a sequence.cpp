 string secFrequent (string arr[], int n)
    {
        //code here.
        map<string,int>m1;
        for(int i=0;i<n;i++)
        {
            m1[arr[i]]++;
        }
        int max=INT_MIN;
        int max1=INT_MIN;
        for(auto it:m1)
        {
            if(it.second>max)
            max=it.second;
        }
        string temp="";
        for(auto it:m1)
        {
            if(it.second>max1 and it.second<max)
            {
                temp=it.first;
                max1=it.second;
            }
        }
        return temp;
    }
