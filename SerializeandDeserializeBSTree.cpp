/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:


    string serialize(TreeNode* root) 
    {
        queue<TreeNode* > q;
        string s="";
        q.push(root);
        while(!q.empty())
        {
            TreeNode* curr=q.front();
            q.pop();
            if(curr==NULL)
            {
                s+="N,";
            }
            else
            {
                    q.push(curr->left);
                    q.push(curr->right);
                
                s+=to_string(curr->val)+',';
            }
            
        }
        cout<<s<<endl;
        return s;
        
        
    }
        
    

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        
        if(data=="")
            return NULL;
        
        queue<TreeNode* > q;
        
        int LR=-1;
        TreeNode* root=NULL;
        int value=0, i=0;
       
        
        while(i<data.length())
        {
            LR=LR*-1;
            if(data[i]=='N')
                i++;
            else
            {
                value=0;
                bool negative=false;
                if(data[i]=='-')
                {
                    negative=true;
                    i++;
                }
                while(data[i]!=',')
                {
                    value=(value*10)+data[i]-'0';
                    i++;
                }
                if(negative)
                {
                    value=-value;
                }
                
                TreeNode* temp=new TreeNode(value);
                if(root==NULL)
                    root=temp;
                else
                {
                    if(LR==-1)
                        q.front()->left=temp;
                    else
                        q.front()->right=temp;
                }
                q.push(temp);
            }
            if(LR==1 && q.size()>1)
                q.pop();
            i+=1;
        }
        return root;
    }
                    
};
// 
