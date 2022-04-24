bool isPowerofTwo(long long n){
        
        // Your code here  
        int i=0;
        if(pow(2,i)==n)
        return true;
        else
        {
            while(pow(2,i)<=n)
            {
                if(pow(2,i)==n)
                return true;
                i++;
            }
            return false;
        }
        
    }
