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
    
    ListNode* revel(ListNode* head, int k)
    {
        int c=0,ck=k;
        
        ListNode* temp=head;
        ListNode* prev=NULL;
        ListNode* curr=head;
        ListNode* ch=curr;
        
        while(ck!=0)
        {
            if(ch==NULL)
            {
                return curr;
            }
            ch=ch->next;
            ck--;
                
        }
        
        while(curr!=NULL && c<k)
        {
            temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
            c++;
        }
        
        if(temp!=NULL)
        {
            head->next=revel(temp,k);
        }
      
        return prev;
    
        
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        
        if(head==NULL)
        {
            return NULL;
        }
        return revel(head,k);
        
    }
};