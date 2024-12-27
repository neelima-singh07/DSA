//here repetion is not allowed and ans should be in sorted order  and no duplicates 
void comb(vector<int>& arr,vector<vector<int>>&ans,vector<int>&ds,int idx,int n,int tar){
        if(tar==0){
            ans.push_back(ds);
            return;

        }
        for(int i=idx;i<n;i++){
            if(arr[i]>tar)break; //if more than target then break 
            if(i>idx && arr[i]==arr[i-1])continue; // skipping sampe elemets to avoid useless recirsion and duplicates in ans 
            ds.push_back(arr[i]); 
            comb(arr,ans,ds,i+1,n,tar-arr[i]);
            ds.pop_back();

        }

    }
    vector<vector<int>> combinationSum2(vector<int>& arr, int tar) {
        vector<vector<int>>ans;
        vector<int>ds;
        sort(arr.begin(),arr.end());
        comb(arr,ans,ds,0,arr.size(),tar);
        return ans;
        
    }
