 */
class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root==nullptr)return new TreeNode(val);
        TreeNode*curr=root;
        while(root!=nullptr){ //or true
            if(curr->val >val ){
                if(curr->left!=nullptr)curr=curr->left;
                else{
                    TreeNode*node=new TreeNode(val);
                    curr->left=node;
                    break;
                }
            }
            else{
                if(curr->right!=nullptr)curr=curr->right;
                else{
                    TreeNode*node=new TreeNode(val);
                    curr->right=node;
                    break;

                }

            }
        }
        return root;
    }
};
