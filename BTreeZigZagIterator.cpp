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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        
        vector<vector<int>> fin;
        vector<int> temp;
        queue<TreeNode* > q;
        TreeNode* curr = root;
        
        if(!root)
            return fin;
        
        q.push(root);
        q.push(NULL);
        int i=0;
        while(q.size()>1)
        {
            curr=q.front();
            q.pop();
            if(curr==NULL)
            {
                i++;
                if(i%2==0)
                {
                    reverse(temp.begin(), temp.end());
                }
                fin.push_back(temp);
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
        i++;
        if(i%2==0)
            reverse(temp.begin(), temp.end());
        fin.push_back(temp);
        return fin;
    }
};
