class Solution {
public:
    void solution(TreeNode* root, int& count, int maxm)
    {
        if(root==nullptr)
        {
            return;
        }
        if(root->val>=maxm)
        {
            count++;
        }
        solution(root->left, count, max(maxm,root->val));
        solution(root->right, count, max(maxm, root->val));
    }
    int goodNodes(TreeNode* root)
    {
        int count=0;
        solution(root, count, root->val);
        return count;
    }
};
