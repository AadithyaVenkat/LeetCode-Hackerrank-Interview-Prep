//More like a preorder traversal

class Solution {
public:
    bool hasPathSum(TreeNode* root, int sum) {
        
        if(!root)
            return false;
        
        stack<pair<TreeNode* ,int>> st;
        st.push({root, sum});
        
        while(!st.empty())
        {
            auto [node, curr_sum] = st.top();
            curr_sum=curr_sum-node->val;
            st.pop();
            
            if(!node->left && !node->right && curr_sum==0)
                return true;
            
            if(node->right)
                st.push({node->right, curr_sum});
            if(node->left)
                 st.push({node->left, curr_sum});
        }
        
        return false;
    
        
    }
};
