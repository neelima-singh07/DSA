class Solution {
public:
    void paths(TreeNode* root, int targetSum,vector<vector<int>>&ans,vector<int>ds){
        if(root==nullptr)return;
        if(root->left==nullptr && root->right==nullptr && root->val==targetSum){
            ds.push_back(root->val);
            ans.push_back(ds);
            return;
        }
        ds.push_back(root->val);
        if (root->left) {
            paths(root->left, targetSum - root->val, ans, ds);
        }
        if (root->right) {
            paths(root->right, targetSum - root->val, ans, ds);
        }
        ds.pop_back();



    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>>ans;
        vector<int>ds;
        paths(root,targetSum,ans,ds);
        return ans;
        
    }
};
