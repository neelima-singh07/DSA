class Solution {
public:
    TreeNode* helper(int st,int end,vector<int>&arr){
        if(st>end)return NULL;
        int mid=st+(end-st)/2;
        TreeNode*root=new TreeNode(arr[mid]);
        root->left=helper(st,mid-1,arr);
        root->right=helper(mid+1,end,arr);
        return root;

    }
    TreeNode* sortedArrayToBST(vector<int>& arr) {
       
        int st=0;
        int end=arr.size()-1;
        return helper(st,end,arr);
        
        
    }
};
