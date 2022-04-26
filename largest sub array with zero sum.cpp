int maxLen(vector<int>&A, int n)
    {   
        // Your code here
        vector<int> v;
        unordered_map<int,int> m1;
        int pref_sum=0;
        for(int i=0;i<n;i++)
        {
            pref_sum=pref_sum+A[i];
            if(pref_sum==0)
            v.push_back(i+1);
            if(m1.count(pref_sum)==0)
            m1[pref_sum]=i;
            else
            v.push_back(abs(i-m1[pref_sum]));
        }
        if(v.size()==0)
        return 0;
        return *max_element(v.begin(),v.end());
    }
