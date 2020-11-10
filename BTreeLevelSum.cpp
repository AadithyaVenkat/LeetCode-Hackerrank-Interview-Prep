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
    int maxLevelSum(TreeNode* root) {
        
        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);
        int sum=0, mx=INT_MIN;
        int i=0, level=0;
        TreeNode* curr=root;
        while(q.size()>1)
        {
            curr=q.front();
            q.pop();
            if(curr==NULL)
            {
                level++;
                if(mx<sum)
                {
                    mx=sum;
                    i=level;
                }
                sum=0;
                q.push(NULL);
            }
            else
            {
                if(curr->left)
                    q.push(curr->left);
                if(curr->right)
                    q.push(curr->right);
                
                sum+=curr->val;
            }
        }
        level++;
         if(mx<sum)
         {
             
                    mx=sum;
                    i=level;
        }
        return i;
        
    }
};
