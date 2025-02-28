void merge(vector<int>& arr,int l,int r,int mid){
        vector<int>temp;
        int f=l;
        int s=mid+1;
        while(f<=mid && s<=r){
            if(arr[f]>=arr[s]){
                temp.push_back(arr[s]);
                s++;
            }
            else{
                temp.push_back(arr[f]);
                f++;
            }
            
        }
        
        //elt still left in left array 
        int idx=0;
        while(f<=mid){
            temp.push_back(arr[f]);
            f++;
            
        }
(*         //elt still left on right array  *)
        
        while(s<=r){
            temp.push_back(arr[s]);
            s++;
            
        }
        //again putting elts in arr 
        for(int i=l;i<=r;i++){
            arr[i]=temp[idx];
            idx++;
            
        }
            
        
        
    }
    
    void divide(vector<int>& arr,int l,int r){
        if(l>=r){
            return;
            
        }
        int mid=l+(r-l)/2;
        //divde
        divide(arr,l,mid);
        divide(arr,mid+1,r);
        //merge
        merge(arr,l,r,mid);
       
        
        
        
    }
    void mergeSort(vector<int>& arr, int l, int r) {
        // code here
        divide(arr,l,r);
        
        
}
