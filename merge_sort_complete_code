(* mergesort complete code *)

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void merge(vector<int>&arr,int st,int mid,int end){
    vector<int>temp;
    int left=st;
    int right=mid+1;
    while(left<=mid && right<=end){
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }
    //left elts append
    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }
    //right elts
    while(right<=end){
        temp.push_back(arr[right]);
        right++;
    }
    //back to arr
    int idx=0;
    for(int i =st;i<=end;i++){
        arr[i]=temp[idx];
        idx++;
    }
    
}
void mergesort(vector<int>&arr,int st,int end){
    if(st>=end){
        return ;
    }
    int mid=st+(end-st)/2;
    //divide the array
    mergesort(arr,st,mid);
    mergesort(arr,mid+1,end);
    //merge the array
    merge(arr,st,mid,end);
    
    
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    mergesort(arr,0,n-1);
    cout << "[";
    for (int i = 0; i < n; i++) {
        cout << arr[i];
        if (i < n - 1) cout << ",";  // Add a comma for separation
    }
    cout << "]";
    
    return 0;
    
}
