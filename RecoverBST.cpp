//Inorder Tree Traversal is must, keep track of prev node and find the diff in value if it is greater then you have to swap, store the nodes to be swapped, come out of loop and break it
class Solution {
public:
    void swap(TreeNode* a, TreeNode* b)
    {
        int tmp=a->val;
        a->val=b->val;
        b->val=tmp;
    }
    void recoverTree(TreeNode* root) {
        
        stack<TreeNode* > st;
        TreeNode* pred=NULL, *x=NULL, *y=NULL;
        while(!st.empty() || root!=NULL)
        {
            while(root!=NULL)
            {
                st.push(root);
                root=root->left;
            }
            root=st.top();
            st.pop();
            if(pred!=NULL && root->val<pred->val)
            {
                y=root;
                if(x==NULL)
                    x=pred;
                else
                    break;
            }
            pred=root;
            root=root->right;
            
        }
        
        swap(x,y);
        
    }
    
};
