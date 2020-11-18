//Backtracking go back and forth between strings
class Solution {
public:
    void dfs(TreeNode* root, string res, vector<string> &result)
    {
        if(!root)
            return;
        
        res+=to_string(root->val);
        if(!root->left && !root->right)
        {
            result.push_back(res);
            return;
        }
        
        if(root->left)
            dfs(root->left, res+"->",result);
        if(root->right)
            dfs(root->right, res+"->", result);
        
    }
    vector<string> binaryTreePaths(TreeNode* root) 
    {
        vector<string> result;
        if(!root)
            return result;
        string res;
        
        dfs(root, res, result);
        return result;
    }
};
