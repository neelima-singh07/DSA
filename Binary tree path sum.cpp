class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        
        
        if(root==nullptr)return false;
        int sum=root->val;
        targetSum=targetSum-root->val;
        if(root->left==nullptr &&root->right==nullptr){
            return targetSum==0;
        }
        

        return (hasPathSum(root->left,targetSum) || hasPathSum(root->right,targetSum)) ;
        
    }
};


//

bool hasPathSum(TreeNode* root, int targetSum) {
        
        
        if(root==nullptr)return false;
        
        
        if(root->left==nullptr &&root->right==nullptr){
            return targetSum==0;
        }
        

        return (hasPathSum(root->left,targetSum-root->left->val) || hasPathSum(root->right,targetSum-root->left->val)) ;
}
