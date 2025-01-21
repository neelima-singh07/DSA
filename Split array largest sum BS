int solve(vector<int>&arr,int maxi){
        int k=1;
        int sum=0;
        for(int i=0;i<arr.size();i++){
            if(sum+arr[i]>maxi){
                k+=1;
                sum=arr[i];
            }
            else{
                sum+=arr[i];
            }
        }
        return k;

    }
    int findmaxi(vector<int>&arr){
        int maxi=INT_MIN;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>=maxi){
                maxi=arr[i];
            }
        }
        return maxi;
    }
    int splitArray(vector<int>& arr, int k) {
        int st=findmaxi(arr);
        int end=0;
        for(int i=0;i<arr.size();i++){
            end+=arr[i];
        }
        int ans=-1;
        while(st<=end){
            
            int mid=st+(end-st)/2;
            int stu=solve(arr,mid);
            if(stu<=k){
                ans=mid;
                end=mid-1;
                
            }
            else{
                st=mid+1;
            }
        }
        return ans;

        
    }
