class Solution {
public:
    bool checkTree(TreeNode* root) {
        if(root==nullptr || (root->left==nullptr && root->right==nullptr))return true;
        int ls=0;
        int rs=0;
        if(root->left){
            ls=root->left->val;
        }
        if(root->right){
            rs=root->right->val;
        }
        if(root->val==ls+rs && checkTree(root->left) && checkTree(root->right))return true;
        else return false;
        
    }
};
