int findPeakElement(vector<int>&arr) {
        int n=arr.size();
        int st=0;
        int end=n-1;
        if(arr.size()==1){
            return 0;
        }
        
        while(st<=end)
        {
            
            int mid=st+(end-st)/2;
            if(mid==0 && arr[mid]>arr[mid+1]){
                return 0;

            }
            if(mid==n-1 && arr[mid]>arr[mid-1]){
                return n-1;
            }
            if(mid>0 && mid<n-1 && arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1]){
                return mid;
            }
            else if(arr[mid]<arr[mid+1]){
                st=mid+1;
            }
            else{
                end=mid-1;
            }


        }
        return -1;
    }
