#Twopointer method fast and slow
class Solution {
public:
    bool hasCycle(ListNode *head) {
     
        if(head==NULL)
            return false;
        
        ListNode* fast=head;
        ListNode* slow=head;
        while(fast->next && fast->next->next)
        {
            if(slow==fast)
                return true;
            fast=fast->next->next;
            slow=slow->next;
        
        }
        return false;
        
    }
};
