//optimal approach two pointer approach 
int maxArea(vector<int>& arr) {
        int f=0;
        int s=arr.size()-1;
        int max_ar=0;
        while(f<s){
            int wi =arr[s]-arr[f];
            int hi = min(arr[s],arr[f]);
            int ar=wi*hi;
            max_ar=max(max_ar,ar);
            arr[f]<arr[s]?f++:s--;
            
        }
        return max_ar;
        
}

