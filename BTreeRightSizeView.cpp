class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        
       vector<int>v;
        int size = 0;
        int i = 0;
        queue<TreeNode*>q;
        TreeNode *temp = NULL;
        
        if(root == NULL)
        {
            return v;
        }
        
        q.push(root);
        
        while(!q.empty())
        {
            size = q.size();
            for(i=0; i<size; i++)
            {
                temp = q.front();
                q.pop();
                
                if(i == size-1)
                {
                    v.push_back(temp->val);
                }
                
                if(temp->left!=NULL)
                {
                    q.push(temp->left);
                }
                
                if(temp->right!=NULL)
                {
                    q.push(temp->right);
                }
            }
        }
        
        return v;
        
    }
};
