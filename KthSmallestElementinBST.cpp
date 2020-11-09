class Solution {
public:
    
    vector<int> result;
    
    void inorder(TreeNode* root)
    {
        if(!root)
            return;
        
        inorder(root->left);
        result.push_back(root->val);
        inorder(root->right);
    }
    int kthSmallest(TreeNode* root, int k) {
        
        inorder(root);
        return result[k-1];
        
    }
};
