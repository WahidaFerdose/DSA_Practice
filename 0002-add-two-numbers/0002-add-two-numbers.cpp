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
     ListNode* rev(ListNode *head) 
    {
        ListNode * prev = NULL;
        ListNode * current = head;
        ListNode * next;
        
        while (current != NULL) 
        { 
            next = current->next;     
            current->next = prev;     
            prev = current;          
            current = next;
        }
        
        return prev; 
    }
    
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode* dummy =new ListNode();
        ListNode* temp=dummy;
    
        
        int carry=0;
       
        while(l1!=NULL || l2!=NULL || carry!=0)
        {
            int sum=0;
            if(l1!=NULL)
            {
                sum=sum+l1->val;
            }
            
            if(l2!=NULL)
            {
                sum=sum+l2->val;
            }
    
            sum=sum+carry;
            carry=sum/10;
            
            ListNode *ans = new ListNode(sum % 10); 
            temp -> next = ans; 
            temp = temp -> next; 
            
            
            
            if(l1) l1= l1->next; 
            if(l2) l2= l2->next;
            
            
        }
        
        
        return dummy->next;
        
        
    }
};