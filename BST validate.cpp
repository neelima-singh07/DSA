//way 1 TC: 0(N) && SC:0(n)
class Solution {
  public:
    // Function to check whether a Binary Tree is BST or not.
    void preorder(Node* root,vector<int>&ans){
        if(root==nullptr)return;
        preorder(root->left,ans);
        ans.push_back(root->data);
        preorder(root->right,ans);
        
    }
    bool isBST(Node* root) {
        // Your code here
        vector<int>ans;
        preorder(root,ans);
        for(int i=1;i<ans.size();i++){
            if(ans[i]<ans[i-1])return false;
        }
        return true;
        
    }
};

//way 2  TC: 0(N) and SC:0(1)

class Solution {
  public:
    // Function to check whether a Binary Tree is BST or not.
    bool solve(Node* root,int minVal,int maxVal){
        if (root == NULL) return true;
        if (root -> data >= maxVal || root -> data <= minVal) return false;
        return solve(root -> left, minVal, root -> data) && solve(root -> right, root -> data, maxVal);
        
    }
    bool isBST(Node* root) {
        // Your code here
        return solve(root, INT_MIN, INT_MAX);
        
    }
};
