class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        
        if(!root)
            return{};
    
        stack<TreeNode* > st;
        vector<int> result;
        
        st.push(root);
        while(!st.empty())
        {
            TreeNode* curr=st.top();
            result.push_back(curr->val);
            st.pop();
            if(curr->right)
                st.push(curr->right);
            
            if(curr->left)
                st.push(curr->left);
            
        }
        
        return result;
    }
};
