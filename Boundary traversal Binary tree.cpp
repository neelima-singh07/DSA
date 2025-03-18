/*
// Tree Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor to initialize a new node
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
    void left(Node *root,vector<int>&ans){
        if(root==nullptr)return;
        if(root->left==nullptr && root->right==nullptr){
            
            return;
        }
        ans.push_back(root->data);
        
        if(root->left){
            left(root->left,ans);
        }
        else{
            left(root->right,ans);
        }
        
    }
    void leaf(Node *root,vector<int>&ans){
        if(root==nullptr)return;
        if(root->left==nullptr && root->right==nullptr){
            ans.push_back(root->data);
            return;
        }
        leaf(root->left,ans);
        leaf(root->right,ans);
        
        
    }
    void right(Node *root,vector<int>&ans){
        if(root==nullptr)return;
        if(root->left==nullptr && root->right==nullptr){
            
            return;
        }
        if(root->right)right(root->right,ans);
        else{
            right(root->left,ans);
        }
        //wapis aate wakt ans store kr lo 
        ans.push_back(root->data);
        
        
    }
    vector<int> boundaryTraversal(Node *root) {
        // code here
        vector<int>ans;
        if(root==nullptr)return ans;
        ans.push_back(root->data);
        //push left elt in binary tree 
        left(root->left,ans);
        
        //push leafnodes 
        leaf(root->left,ans);
        //leaf nodes left 
        leaf(root->right,ans);
        //leaf nodes right 
        
        //push right elt in binary tree
        right(root->right,ans);
        return ans;
        
    }
};
