class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if (root == nullptr) return false;

    // If it's a leaf node, check if the remaining sum matches the node's value
    if (root->left == nullptr && root->right == nullptr) {
        return root->val == targetSum;
    }

    // Recursive call for left and right subtrees with updated targetSum
    return hasPathSum(root->left, targetSum - root->val) || 
           hasPathSum(root->right, targetSum - root->val);
    }
};
