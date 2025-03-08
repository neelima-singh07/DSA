void segregate0and1(vector<int> &arr) {
        // code here
        int s=0;
        int e=arr.size()-1;
        while(s<e){
            if(arr[s]==0){
                s++;
                
            }
            
            else{
                if(arr[e]==0){
                    swap(arr[s],arr[e]);
                    s++;
                    e--;
                    
                }
                else{
                    e--;
                }
            }
            
        }
    }
