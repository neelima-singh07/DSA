//codechef problem
#include <bits/stdc++.h>
using namespace std;
#include <vector>
void solve(vector<int>&arr,vector<int>&ds,vector<vector<int>>&ans,int n,int tar,int idx){
    if(tar==0){
        ans.push_back(ds);
        return;
        
    }
    for(int i=idx;i<n;i++){
        if(arr[i]>tar)break;
        if (i > idx && arr[i] == arr[i - 1]) continue;
        ds.push_back(arr[i]);
        solve(arr,ds,ans,n,tar-arr[i],i);
        ds.pop_back();
        
        
    }
    
    
}
void combinationSum(vector<int>&arr,int n,int tar){
    vector<vector<int>>ans;
    vector<int>ds;
    sort(arr.begin(),arr.end());
    solve(arr,ds,ans,n,tar,0);
    cout << ans.size() << endl;
    for(auto &comb:ans){
        for(int num:comb){
            cout<<num<<" ";
            
        }
        cout<<endl;
        
    }
    
} 
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int tar;
	    cin>>tar;
	    vector<int>arr(n);
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	        
	    }
	    combinationSum(arr,n,tar);
	    
	    
	}
	
	

}
