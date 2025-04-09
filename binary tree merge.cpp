TreeNode* merge(TreeNode*p,TreeNode* q,TreeNode*node){
        
        if(p == NULL && q == NULL) return NULL;
        node = new TreeNode(0);
        if(p!=NULL && q!=NULL){
           
            node->val=p->val+q->val;
        }
        if(p!=NULL && q==NULL){
            node->val=p->val;
        }
        if(q!=NULL && p==NULL){
            node->val=q->val;

        }
        node->left = merge(p ? p->left : NULL, q ? q->left : NULL, node->left);
        node->right = merge(p ? p->right : NULL, q ? q->right : NULL, node->right);

        return node;
    }
    TreeNode* mergeTrees(TreeNode* p, TreeNode* q) {
        TreeNode* node=nullptr;
        return merge(p,q,node);
    }
