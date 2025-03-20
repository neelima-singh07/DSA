//way 1 
class Solution {
  public:
    bool identical(Node *p, Node *q){
        if(p==nullptr||q==nullptr){
            return p==q;
        }
        return (p->data==q->data) && identical(p->left,q->left) && identical(p->right,q->right);
    }
    // Function to check if two trees are identical.
    bool isIdentical(Node *p, Node *q) {
        // Your Code here
        
        if(p->data!=q->data){
            return false;
            
        
        }
        
        return identical(p->left,q->left) && identical(p->right,q->right);
    }
};


//way 2 
bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==nullptr||q==nullptr){
            return p==q;
        }
        return (p->val==q->val) && (isSameTree(p->left,q->left)) && (isSameTree(p->right,q->right));


 }
