//Code for rotating an array
 void rotateArr(int arr[], int d, int n){
        // code here
        int k=d%n;
        int a[k];
        for(int i=0;i<k;i++)
        {
            a[i]=arr[i];
        }
        for(int i=k;i<n;i++)
        {
            arr[i-k]=arr[i];
        }
        int c=0;
        for(int i=n-k;i<n;i++)
        {
            arr[i]=a[c++];
        }
    }
