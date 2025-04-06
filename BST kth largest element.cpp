//way 1 
void preorder(TreeNode* root, int&ans,int k,int&cnt){
        
        if(root==nullptr)return;
        preorder(root->left,ans,k,cnt);
        cnt++;
        if(cnt==k){
            ans=root->val;
        }
        preorder(root->right,ans,k,cnt);

    }
    int kthSmallest(TreeNode* root, int k) {
     
        if(root->left==nullptr && root->right==nullptr)return root->val;
        int ans=-1;
        int cnt=0;
        preorder(root,ans,k,cnt);
        
        return ans;
    }

//way 2 
class Solution {
public:
    void preorder(TreeNode* root, vector<int>&ans,int k){
        if(root==nullptr)return;
        preorder(root->left,ans,k);
        ans.push_back(root->val);
        preorder(root->right,ans,k);

    }
    int kthSmallest(TreeNode* root, int k) {
     
        if(root->left==nullptr && root->right==nullptr)return root->val;
        vector<int>ans;
        int cnt=0;
        preorder(root,ans,k);
        for(int i=0;i<ans.size();i++){
            if(i==k-1){
                cnt=ans[i];
            }
        }
       
        return cnt;
        
    }
