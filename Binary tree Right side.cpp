class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {

        vector<int>ans;
        if(root==nullptr)return ans;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int size=q.size();
            int data=0;
            while(size>0){
                TreeNode*node=q.front();
                q.pop();
                data=node->val;
                if(node->left)q.push(node->left);
                if(node->right)q.push(node->right);
                size--;
            }
            ans.push_back(data);


        }
        return ans;
        

        
    }
};
