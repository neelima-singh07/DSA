//repetion is allowed here 
void comb(vector<int>& arr,vector<vector<int>>&ans,vector<int>&ds,int idx,int n,int tar){
        if(idx==n){
            if(tar==0){
                ans.push_back(ds);
                

            }
            return;

        }

        //picking multiple times
        if(arr[idx]<=tar){
            ds.push_back(arr[idx]);
            comb(arr,ans,ds,idx,n,tar-arr[idx]);
            ds.pop_back();

        }
        //not picking multiple times
        comb(arr,ans,ds,idx+1,n,tar);


    }
    vector<vector<int>> combinationSum(vector<int>& arr, int tar) {
        vector<vector<int>>ans;
        vector<int>ds;
        comb(arr,ans,ds,0,arr.size(),tar);
        return ans;
        
    }
