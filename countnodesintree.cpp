//Finish counting code
class Solution {
public:
    int countNodes(TreeNode* root) {
        
        int cnt=0;
        if(root==NULL)
            return NULL;
        
        return 1 + countNodes(root->left) + countNodes(root->right);
        
    }
};
