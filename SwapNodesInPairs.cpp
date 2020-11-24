class Solution {
public:
    ListNode* swapPairs(ListNode* head) 
    {
        
        ListNode* temp=head;
        ListNode* prev=NULL;
        int cnt=0, tmp=0;
        while(temp!=NULL)
        {
            
            if(cnt%2!=0)
            {
                int tmp=temp->val;
                temp->val=prev->val;
                prev->val=tmp;
            }
            cnt++;
            prev=temp;
            temp=temp->next;
        }
        
        return head;
        
    }
};
