#include <bits/stdc++.h>
long long merge(long long *arr,int n,int st,int end,int mid){
    long long  count_inv=0;
    vector<int>temp;
    int i=st;
    int j=mid+1;
    while(i<=mid && j<=end){
        if(arr[i]<=arr[j]){
            temp.push_back(arr[i]);
            i++;


        }
        else{
            temp.push_back(arr[j]);
            count_inv+=mid-i+1;
            j++;

        }

    }
    //bacche hue elts ko append kr do 
    while(i<=mid){
        temp.push_back(arr[i]);
        i++;

    }
    while(j<=end){
        temp.push_back(arr[j]);
        j++;

    }

    int idx=0;
    for(int x=st;x<=end;x++){
        arr[x]=temp[idx];
        idx++;

    }

    return count_inv;

} 
long long mergesort(long long *arr,int n,int st,int end){
    //base case 
    if(st>=end){
        return 0;

    }

    int mid=st+(end-st)/2;
    long long left_inv=mergesort(arr,n,st,mid);//left half
    long long right_inv=mergesort(arr,n,mid+1,end);//right half
    long long third=merge(arr,n,st,end,mid);
    return left_inv+right_inv+third;
    
}
long long getInversions(long long *arr, int n){
    // Write your code here.
    return mergesort(arr,n,0,n-1);
    
    
}
