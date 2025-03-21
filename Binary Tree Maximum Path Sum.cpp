/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maximum(TreeNode* root,int &maxi){
        if(root==nullptr)return 0;
        int ls=max(0,maximum(root->left,maxi));
        int rs=max(0,maximum(root->right,maxi));
        maxi=max(ls+rs+root->val,maxi);
        
        return max(ls,rs)+root->val;
    }
    int maxPathSum(TreeNode* root) {
        int maxi=INT_MIN;
        maximum(root,maxi);
        return maxi;
        
        
    }
};
