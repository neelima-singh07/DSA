bool ispossible(vector<int>& arr,int max_wt,int max_days){
        int days=1;
        int wt=0;
        for(int i=0;i<arr.size();i++){
            if(wt+arr[i]<=max_wt){
                wt+=arr[i];
                
            }
            else{
                days+=1;
                
                wt=arr[i];
                if (arr[i] > max_wt) {   // Check if a single item's weight exceeds capacity
                    return false;
                }
            }
        }
        if(days>max_days){
            return false;
        }
        return true;
    }
    int shipWithinDays(vector<int>& arr, int days) {
        int st=0;
        int end=0;
        for(int i=0;i<arr.size();i++){
            end+=arr[i];
        }
        int ans=0;
        while(st<=end){
            
            int mid=st+(end-st)/2;
            if(ispossible(arr,mid,days)==true){
                ans=mid;
                end=mid-1;

            }
            else{
                st=mid+1;
            }
        }
        return ans;
    }
