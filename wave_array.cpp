void convertToWave(int n, vector<int>& arr){
        
        // Your code here
           for(int i=1;i<n;i=i+2)
            {
                swap(arr[i],arr[i-1]);
            }
    }
