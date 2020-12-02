/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
     struct compare
        {
            bool operator()(const ListNode* l1,const ListNode* l2)
            {
                return l1->val>l2->val;   
            }
  
        };
    
    ListNode* mergeKLists(vector<ListNode*>& lists) 
    {
     
        priority_queue<ListNode* , vector<ListNode*>, compare> pq;
        for(auto l:lists)
        {
            if(l)
                pq.push(l);
        }
     
        ListNode pre(0);
        ListNode* node=&pre;
        
        while(!pq.empty())
        {
            ListNode* top=pq.top();
            pq.pop();
            node->next=top;
            node=node->next;
            if(top->next)
                pq.push(top->next);
        }
  
        return pre.next;
       
    }
};
