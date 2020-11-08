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
    
    void inorder(TreeNode* root, vector<int>& res1)
    {
        if(!root)
            return;
        inorder(root->left, res1);
        res1.push_back(root->val);
        inorder(root->right, res1);
    }
    bool twoSumBSTs(TreeNode* root1, TreeNode* root2, int target) {
        
        vector<int> res1;
        inorder(root1, res1);
        inorder(root2, res1);
        
        unordered_map<int, int> mp;
        for(int i=0; i<res1.size(); i++)
        {
            int temp=target-res1[i];
            if(mp.find(temp)!=mp.end())
                return true;
            else
                mp[res1[i]]=temp;
        }
        return false;
        
    }
};
