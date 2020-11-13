
class Solution {
public:
    unordered_map<int, int> map;
    void inorder(TreeNode* root)
    {
        if(!root)
            return;
        inorder(root->left);
        map[root->val]++;
        inorder(root->right);
        
    }
    vector<int> findMode(TreeNode* root) {
        
        vector<int> res;
        inorder(root);
        int mode=0;
        for(auto it=map.begin(); it!=map.end(); it++)
        {
            mode=max(mode, it->second);
        }
        for(auto it=map.begin(); it!=map.end(); it++)
        {
            if(mode==it->second)
                res.push_back(it->first);
        }
        
        return res;
        
    }
};
