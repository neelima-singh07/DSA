class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
      //one way TC: 0(log2N)  SC: 0(1)
        while(root !=NULL && root->val != val){
             
           root = (root->val > val) ? root->left : root->right ; 
        }
        return root ;

        //recursive way  TC: 0(log2N) SC: 0(N)
        TreeNode * current;
        if (root == NULL || root -> val == val)
            current = root;
        else if (root -> val < val)
            current = searchBST(root -> right, val);
        else if (root -> val > val)
            current = searchBST(root -> left, val);

        return current;

        
    }
};
