//leetcode 287
 int findDuplicate(vector<int>& arr) {
        //first aproach is with using a vector and a fn *max_element(arr.begin(),arr.end()) of STL O(N) and O(N)
        int maxi=*max_element(arr.begin(), arr.end());
        vector<int>temp(maxi+1);
        int ans;
        for(int i=0;i<arr.size();i++){
            temp[arr[i]]++;

        }
        for(int i=0;i<temp.size();i++){
            if(temp[i]>1){
                ans=i ;
                break;

            }

        }
        return ans;
        
        
    }

    //second approach is without using any extra space and sorting O(nlogn) & O(1)
    int findDuplicate(vector<int>& arr) {
        int ans=0;
        sort(arr.begin(),arr.end()); //sorting the arr
        for(int i=0;i<arr.size()-1;i++){
            if(arr[i]==arr[i+1]){
                ans=arr[i];
                break;


            }

        }
        return ans;
    }

    //third approach is O(N ) and O(1)
    //only works if elts of arr is less than arr size 
     int findDuplicate(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++) {
            int ind = abs(nums[i]);
            if (nums[ind] < 0) {
                return ind;
            }
            nums[ind] = -nums[ind];
        }
        return -1;
    }
