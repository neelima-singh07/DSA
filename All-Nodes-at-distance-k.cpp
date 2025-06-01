/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    void markparents(TreeNode*root,unordered_map<TreeNode*,TreeNode*>&mpp){
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            TreeNode*curr=q.front();
            q.pop();
            if(curr->left){
                mpp[curr->left]=curr;
                q.push(curr->left);
            }
            if(curr->right){
                mpp[curr->right]=curr;
                q.push(curr->right);
            }

        }
    }
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        unordered_map<TreeNode*,TreeNode*>mpp;
        markparents(root,mpp);
        vector<int>ans;
        unordered_map<TreeNode*,bool>vis;
        
        queue<TreeNode*>q;
        int dist=0;
        q.push(target);
        vis[target]=true;
        while(!q.empty()){
            if(dist++==k)break;
            int size=q.size();
            for(int i=0;i<size;i++){
                
                TreeNode*curr=q.front();
                q.pop();
                
                if(curr->left && vis[curr->left]!=true){
                    vis[curr]=true;
                    q.push(curr->left);

                }
                if(curr->right && vis[curr->right]!=true){
                    vis[curr]=true;
                    q.push(curr->right);

                }
                if(mpp[curr] && !vis[mpp[curr]]){
                    vis[mpp[curr]]=true;
                    q.push(mpp[curr]);
                }
                
            }

        }

        while(!q.empty()){
            TreeNode*curr=q.front();
            q.pop();
            ans.push_back(curr->val);
            
        }
        return ans;
        
    }
};
