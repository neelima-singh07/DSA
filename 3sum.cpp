vector<vector<int>> threeSum(vector<int>& arr) {
    sort(arr.begin(), arr.end());
    vector<vector<int>> ans;
    int n=arr.size();

    for (int i = 0; i < n - 2; i++) {
        // Avoid duplicates for the first element
        if (i > 0 && arr[i] == arr[i - 1]) {
            continue;
        }

        int target = -arr[i];
        int start = i + 1, end = n - 1;

        while (start < end) {
            int sum = arr[start] + arr[end];

            if (sum == target) {
                ans.push_back({arr[i], arr[start], arr[end]});

                // Move start and end to the next different elements to avoid duplicates
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



    