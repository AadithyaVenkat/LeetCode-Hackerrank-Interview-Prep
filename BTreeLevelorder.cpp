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
    vector<vector<int>> levelOrder(TreeNode* root) {
        
        vector<vector<int>> res;
        vector<int> temp;
        queue<TreeNode* > q;
        
        if(!root)
            return  res;
        
        TreeNode* curr=root;
        q.push(root);
        q.push(NULL);
        while(q.size()>1)
        {
            curr=q.front();
            q.pop();
            if(curr==NULL)
            {
                res.push_back(temp);
                temp={};
                q.push(NULL);
            }
            else
            {
                if(curr->left)
                    q.push(curr->left);
                if(curr->right)
                    q.push(curr->right);
                
                temp.push_back(curr->val);
                
            }
        }
        res.push_back(temp);
        return res;
        
    }
};
