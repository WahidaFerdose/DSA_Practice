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
    ListNode* deleteMiddle(ListNode* head) {
        
       
        if(head->next==NULL)
        {
            return NULL;
        }
        
        ListNode* slow=head;
        ListNode* fast=head;
        ListNode* pre=new ListNode(0);
        pre->next=head;
        
        
        
        
        while(fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next;
            pre=pre->next;
            if(fast!=NULL)
            {
                fast=fast->next;
            }
        }
        
        
        if(slow->next==NULL)
        {
            pre->next=NULL;
        }
        
        else
        {
            pre->next=slow->next;
            slow->next=NULL;
        }
        
        delete slow;
        return head;
        
    }
};