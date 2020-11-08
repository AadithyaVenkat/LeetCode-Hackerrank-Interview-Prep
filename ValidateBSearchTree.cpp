class Solution {
public:
    vector<int> v;
    void inorder(TreeNode* root)
    {
        if(!root)
            return;
     
        inorder(root->left);
        v.push_back(root->val);
        inorder(root->right);
        
    }
    bool isValidBST(TreeNode* root) {
        
        if(!root)
        {
            return true;
        }
        inorder(root);
        for(int i=1;i<v.size(); i++)
        {
            if(v[i]<=v[i-1])
                return false;
        }
        
        return true;
        
        
    }
};
