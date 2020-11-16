class Solution {
public:
    
    vector<int> result;
    void inorder(TreeNode* root)
    {
        if(!root)
            return;
        
        inorder(root->left);
        result.push_back(root->val);
        inorder(root->right);
        
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        
        int sum=0;
        inorder(root);
        for(int i=0; i<result.size();i++)
        {
            if(result[i]>=low && result[i]<=high)
                sum+=result[i];
        }
        return sum;        
        
    }
};
