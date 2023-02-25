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
    ListNode* oddEvenList(ListNode* head) {
        
        ListNode* eH=new ListNode(-1);
        ListNode* eT=eH;
        ListNode* oH=new ListNode(-1);
        ListNode* oT=oH;
        
        
        ListNode* temp=head;
        
        int n=1;
        
        while(temp!=NULL)
        {
            int value=temp->val;
            
            if(n%2!=0)
            {
                oT->next=temp;
                oT=temp;
            }
            else
            {
                eT->next=temp;
                eT=temp;
            }
            
            temp=temp->next;
            n++;
        }
        
        
        if(eH->next!=NULL)
        {
            oT->next=eH->next;
        }
        else
        {
            oT->next=NULL;
        }
        eT->next=NULL;
            
            
       head=oH->next;
        return head;
        
        
    }
};