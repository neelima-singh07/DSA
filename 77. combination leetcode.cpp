void comb(vector<int>&arr,vector<int>&ds,vector<vector<int>>&ans,int k,int idx){
        if(k==0){
            ans.push_back(ds);
            return;
        }
        if (idx >= arr.size()) return; 
        //take 
        ds.push_back(arr[idx]);
        comb(arr,ds,ans,k-1,idx+1);
        ds.pop_back();

        //not take
        comb(arr,ds,ans,k,idx+1);


    }
    vector<vector<int>> combine(int n, int k) {
        vector<int>arr;
        for(int i=1;i<=n;i++){
            arr.push_back(i);
        }
        vector<int>ds;
        vector<vector<int>>ans;
        comb(arr,ds,ans,k,0);
        return ans;
        
    }
