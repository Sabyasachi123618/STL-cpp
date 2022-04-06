 bool subArrayExists(int arr[], int n)
    {
        //Your code here
        unordered_set<int> s;
        int pref_sum=0;
        for(int i=0;i<n;i++)
        {
            pref_sum+=arr[i];
            if(pref_sum==0)
            return true;
            else
            {
                if(s.find(pref_sum)==s.end())
                s.insert(pref_sum);
                else
                return true;
            }
        }
        return false;
    }
