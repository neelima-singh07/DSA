class Solution {
  public:
    void comb(Node* root,vector<vector<int>>&ans,vector<int>&ds){
        if(root==nullptr)return ;
        ds.push_back(root->data);
        if(root->left ==nullptr && root->right==nullptr){
            
            ans.push_back(ds);
        }
        else{
            if(root->left)comb(root->left,ans,ds);
            if(root->right)comb(root->right,ans,ds);
        }
        
        ds.pop_back();
    }
    vector<vector<int>> Paths(Node* root) {
        // code here
        vector<vector<int>>ans;
        vector<int>ds;
        comb(root,ans,ds);
        return ans;
    }
};
