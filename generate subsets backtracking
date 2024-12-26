
void f(vector<int> &arr,int n,vector<int>&ds,vector<vector<int>>&ans,int idx){
    if(idx>=n){
        ans.push_back(ds);
        return;

    }
    //taking 
    ds.push_back(arr[idx]); //taking
    f(arr,n,ds,ans,idx+1); //callling 
    ds.pop_back(); //removing 
    //not taking 
    f(arr,n,ds,ans,idx+1); //not taking 

}
vector<vector<int>> FindAllSubsets(vector<int> &arr){
    //  write your code here
    vector<vector<int>>ans;
    vector<int>ds;
    int idx=0;
    int n=arr.size();
    f(arr,n,ds,ans,idx);
    return ans;
    
}
