//Optimal approach 1 
int largestRectangleArea(vector<int>& arr) {
        stack<int>st;
        int n=arr.size();
        vector<int>ans;
        vector<int>nse(n,n);
        vector<int>pse(n,-1);
        //find next smaller element 
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && arr[st.top()]>=arr[i]){
                st.pop();
            }
            if(!st.empty()){
                nse[i]=st.top();
            }
            
            st.push(i);
        }
        //clear the stack and find previous smaller element  
        while(!st.empty()){
            st.pop();
        }
        for(int i=0;i<n;i++){
            while(!st.empty() && arr[st.top()]>=arr[i]){
                st.pop();
            }
            if(!st.empty()){
                pse[i]=st.top();
            }
            
            st.push(i);

        }

        //now find area of rectangle 
        int maxi=0;
        for(int i=0;i<arr.size();i++){
            int area=arr[i]*(nse[i]-pse[i]-1);
            maxi=max(maxi,area);

        }
        return maxi;


        

        
    }

//optimal approach 2 
