// Definition for a binary tree node.
class TreeNode {
public:
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution {
public:
    // Helper function to find the leftmost (minimum value) node in a subtree.
    TreeNode* findleftmost(TreeNode* root) {
        while (root->left != nullptr) {
            root = root->left;
        }
        return root;
    }

    // This function handles the deletion logic and re-arrangement of nodes
    // when the node to be deleted has both left and right children.
    TreeNode* helper(TreeNode* root) {  //if ypu want reverse left node to be the new node after delteion replace right<->left in helper and findleftmost function 
        // If only right child exists, return it (bypassing the current node)
        if (root->left == nullptr) return root->right;

        // If only left child exists, return it
        if (root->right == nullptr) return root->left;

        // If both children exist:
        TreeNode* leftchild = root->left;

        // Find the leftmost node in the right subtree (in-order successor)
        TreeNode* leftmost = findleftmost(root->right);

        // Attach the left subtree to the leftmost node of the right subtree
        leftmost->left = leftchild;

        // Return the right subtree, which is now the new root of this subtree
        return root->right;
    }

    // Main function to delete a node with a given key in BST
    TreeNode* deleteNode(TreeNode* root, int key) {
        if (root == nullptr) return nullptr;

        // If the root itself is the node to be deleted
        if (root->val == key) {
            return helper(root);
        }

        // Store the original root to return later
        TreeNode* dummy = root;

        // Iteratively search for the node to be deleted
        while (root != nullptr) {
            if (root->val > key) {
                // Go left if key is smaller
                if (root->left != nullptr && root->left->val == key) {
                    // Found node to delete on the left
                    root->left = helper(root->left);
                    break;
                } else {
                    root = root->left;
                }
            } else {
                // Go right if key is larger
                if (root->right != nullptr && root->right->val == key) {
                    // Found node to delete on the right
                    root->right = helper(root->right);
                    break;
                } else {
                    root = root->right;
                }
            }
        }

        // Return the unchanged root (except for the deleted node)
        return dummy;
    }
};
