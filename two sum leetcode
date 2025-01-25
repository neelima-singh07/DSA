vector<int> twoSum(vector<int>& arr, int target) {
        unordered_map<int, int> mpp; // Map to store (value, index)
        vector<int> ans;

        for (int i = 0; i < arr.size(); i++) {
            int complement = target - arr[i]; 
            if (mpp.find(complement) != mpp.end()) {
            
                ans.push_back(mpp[complement]); 
                ans.push_back(i); 
                 
            }
        
            mpp[arr[i]] = i;
        }
    
    
        return ans;
        
    }
