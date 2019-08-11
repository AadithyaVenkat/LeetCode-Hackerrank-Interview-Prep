    bool isSameTree(TreeNode* p, TreeNode* q) {
        
        if (p==NULL && q==NULL) return true; // Check for empty tree
        if ((p == NULL && q!=NULL) ||(q == NULL && p!=NULL)) return false; // check for null and non null trees
        return (p->val == q->val) && isSameTree(p->left, q->left) && isSameTree(p->right, q->right); //recursive solution for tree
        
    }
