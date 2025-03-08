# //approach uses reverse 
void reverse(vector<int>& arr,int st,int end){
        while(st<=end){
            swap(arr[st],arr[end]);
            st++;
            end--;
        }

    }
void rotate(vector<int>& arr, int k) {
        k=k%arr.size();

        reverse(arr, 0, arr.size() - 1);   
        reverse(arr, 0, k - 1);             
        reverse(arr, k, arr.size() - 1);
        
}
