void comb(vector<int>&arr,vector<int>&ds,vector<vector<int>>&ans,int k,int target,int idx){
        //base case
        if(k==0 && target==0){
            ans.push_back(ds);
            return;
        }
        if(idx==arr.size()){
            return;

        }
        if (k < 0 || target < 0) return;
        //take 
        ds.push_back(arr[idx]);
        comb(arr,ds,ans,k-1,target-arr[idx],idx+1);
        ds.pop_back();
        //not take
        comb(arr,ds,ans,k,target,idx+1);

    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int>arr;
        for(int i=1;i<=9;i++){
            arr.push_back(i);
        }
        vector<int>ds;
        vector<vector<int>>ans;
        comb(arr,ds,ans,k,n,0);
        return ans;
        
    }
