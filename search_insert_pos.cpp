  // code here
        int low=0;int high=N-1;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(Arr[mid]>k)
            high=mid-1;
            else if(Arr[mid]<k)
            low=mid+1;
            if(Arr[mid]==k)
            return mid;
        }
        return low;
