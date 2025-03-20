class Solution {
  public:
    bool symm(Node*left,Node*right){
        if(left==nullptr||right==nullptr){
            return left==right;
            
        }
        return (left->data==right->data) && symm(left->left,right->right) && symm(left->right,right->left);
        
    }
    bool isSymmetric(Node* root) {
        // Code here
        return symm(root->left,root->right);
        
        
    }
};
