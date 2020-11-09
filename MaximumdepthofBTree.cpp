class Solution {
public:
    int maxDepth(TreeNode* root) {
        
       int let=0;
        if(root==NULL)
            return 0;
       TreeNode* curr=root;
       queue<TreeNode* > q;
       q.push(root);
       q.push(NULL);
       while(q.size()>1)
       {
           curr=q.front();
           q.pop();
           if(curr==NULL)
           {
               let++;
               q.push(NULL);
           }
           else
           {
               if(curr->left)
                   q.push(curr->left);
               if(curr->right)
                   q.push(curr->right);
           }
           
       }
        return let+1;
        
    }
};
