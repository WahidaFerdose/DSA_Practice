/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    
    
   
    ListNode *detectCycle(ListNode *head) {
        
        if(head==NULL || head->next==NULL)
        {
            return NULL;
        }
        
        ListNode *slow=head;
        ListNode *fast=head;
        ListNode *temp=head;
        
        
        while(slow!=NULL && fast!=NULL)
        {
            slow=slow->next;
            fast=fast->next;
            
            if(fast!=NULL)
            {
                fast=fast->next;
            }
            
            if(slow==fast)
            {
                while(slow!=temp)
                {
                    temp=temp->next;
                    slow=slow->next;
                }
                
                return slow;
            }
        }
        
        return NULL;
        
    }
};