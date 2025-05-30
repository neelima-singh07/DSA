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
    bool isvalid(Node*root){
        if(root->left==NULL && root->right==NULL)return false;
        return true;
    }
    void left(Node*curr,vector<int>&ans){
        if(curr==NULL)return;
        if(isvalid(curr)){
            ans.push_back(curr->data);
            if(curr->left)left(curr->left,ans);
            else left(curr->right,ans);
            
        }
        
    }
    void leaf(Node*root,vector<int>&ans){
        if(root==NULL)return;
        if(root->left==NULL && root->right==NULL){
            ans.push_back(root->data);
            return;
        }
        leaf(root->left,ans);
        leaf(root->right,ans);
    }
    void right(Node*curr,vector<int>&ans){
        if(curr==NULL)return;
        vector<int>temp;
        if(isvalid(curr)){
            temp.push_back(curr->data);
            if(curr->right)right(curr->right,ans);
            else right(curr->left,ans);
            
            
        }
        for(int i=temp.size()-1;i>=0;i--){
            ans.push_back(temp[i]);
        }
           
            
        
        
    }
    vector<int> boundaryTraversal(Node *root) {
        // code here
        if(root->left==NULL && root->right==NULL)return {root->data};
        vector<int>ans;
        if(root==NULL)return ans;
        ans.push_back(root->data);
        left(root->left,ans);
        leaf(root,ans);
        right(root->right,ans);
        return ans;
        
        
    }
};
