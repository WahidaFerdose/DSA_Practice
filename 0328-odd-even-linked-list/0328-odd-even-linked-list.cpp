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
      
    
        if(!head || !head->next || !head->next->next) return head;
        
        ListNode *odd = head;
        ListNode *even = head->next;
        ListNode *even_start = head->next;
        
        while(odd->next && even->next){
            odd->next = even->next; //Connect all odds
            even->next = odd->next->next;  //Connect all evens
            odd = odd->next;
            even = even->next;
        }
        odd->next = even_start;   //Place the first even node after the last odd node.
        return head; 
        
        
      /* 
      
      
      My approach:
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
        return head;*/
        
        
    }
};