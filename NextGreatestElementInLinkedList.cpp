class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
        
       stack<int> st;
        vector<int> ans;
        
        ListNode* temp=head;
        while(temp!=NULL)
        {
            ans.push_back(temp->val);
            temp=temp->next;
        }
        
        vector<int> result(ans.size(),0);
        
        for(int i=0; i<ans.size(); i++)
        {
            while(!st.empty() && ans[st.top()]<ans[i])
            {
                result[st.top()]=ans[i];
                st.pop();
            }    
            st.push(i);    //push the index fully inside and 
        }
        
        return result;
        
    }
};
