/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<TreeNode*> res;
    void inorder(TreeNode* root)
    {
        if(!root)
            return;
        inorder(root->left);
        res.push_back(root);
        inorder(root->right);
        
    }
    
    TreeNode* construct(int low, int high)
    {
        if(low>high)
            return NULL;
        
        int mid=low+(high-low)/2;
        auto root=res[mid];
        
        root->left=construct(low, mid-1);
        root->right=construct(mid+1, high);
        
        return root;
    }
    TreeNode* balanceBST(TreeNode* root) {
        
        inorder(root);
        return construct(0 , res.size()-1);
        
    }
};
