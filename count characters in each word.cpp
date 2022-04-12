 vector<int> countChars (string s)
    {
        // code here
        vector<int> result;
        int count=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]!=' ')
            {
                count++;
            }
            if(s[i]==' ' or i==s.length()-1) //2nd condition for edge condition
            {
                result.push_back(count);
                count=0;
            }
        }
        return result;
    }
