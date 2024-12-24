vector<vector<int>> threeSum(vector<int>& arr) {
    sort(arr.begin(), arr.end());
    vector<vector<int>> ans;
    int n=arr.size();

    for (int i = 0; i < n - 2; i++) {
        
        if (i > 0 && arr[i] == arr[i - 1]) {
            continue;
        }

        int target = -arr[i];
        int start = i + 1, end = n - 1;

        while (start < end) {
            int sum = arr[start] + arr[end];

            if (sum == target) {
                ans.push_back({arr[i], arr[start], arr[end]});

                // M avoid duplicates
                while (start < end && arr[start] == arr[start + 1]) start++;
                while (start < end && arr[end] == arr[end - 1]) end--;

                start++;
                end--;
            } else if (sum < target) {
                start++;
            } else {
                end--;
            }
        }
    }

    return ans;
        
    }

#4sum problem 

vector<vector<int>> fourSum(vector<int>& arr, int target) {
        sort(arr.begin(),arr.end());
        vector<vector<int>>ans;
        int n=arr.size();
        for(int i=0;i<n-3;i++){
            if(i>0 && arr[i]==arr[i-1])continue;

            for(int j=i+1;j<n-2;j++){
                if(j>i+1 && arr[j]==arr[j-1])continue;

                long long sum = (long long)target - arr[i] - arr[j];
                int s=j+1;
                int e=n-1;
            

                while(s<e){
                    long long y= (long long)arr[s] + arr[e];
                    if(y==sum){
                        ans.push_back({arr[i],arr[j],arr[s],arr[e]});
                        s++;
                        e--;
                        

                       while(s<e && arr[s]==arr[s-1])s++;
                       while(s<e && arr[e]==arr[e+1])e--;
                       




                    }

                    else if(y<sum){
                       s++;

                    }
                    else{
                        e--;
                    }

                }

            }
        

        }
        return ans;
        
    }




    
