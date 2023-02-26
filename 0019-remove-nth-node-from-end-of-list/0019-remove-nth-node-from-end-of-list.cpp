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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head->next==NULL && n==1)
        {
            delete head;
            return NULL;
        }
        

        ListNode *temp=head;
        
        
        int k=0;
        while(temp!=NULL)
        {
            k++;
            temp=temp->next;
        }
       
        
        temp=head;
        
        
        if(k==n)
        {
            head=head->next;
            temp->next=NULL;
            
            delete temp;
            return head;
        }
        
        
         ListNode *pre=new ListNode(0);
        pre->next=head;
        
       
       int i=0;
        while(i<k-n)
        {
            pre=pre->next;
             temp=temp->next;
             i++;
            }
        
        

        pre->next=temp->next;
        temp->next=NULL;
        delete temp;




        return head;
        
    }
};