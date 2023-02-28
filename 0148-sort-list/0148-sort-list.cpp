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
    /*ListNode* sortList(ListNode* head) {
   
   
        
    }*/
    
    
    ListNode* getmiddle(ListNode *head)
    {
         if (head == nullptr || head->next == nullptr) {
        return head;
    }
    ListNode* slow = head;
    ListNode* fast = head->next;
    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
       /* if(head==NULL || head->next==NULL)
        {
            return head;
        }

        ListNode* slow=head;
        ListNode* fast=head;

        while(fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next;
            if(fast!=NULL)
            {
                fast=fast->next;
            }
        }

        return slow;*/
    }

ListNode* merge(ListNode* left, ListNode* right)
{
    if(left==NULL)
    {
        return right;
    }
    if(right==NULL)
    {
        return left;
    }
    
    ListNode* dummy=new ListNode(-1);
    ListNode* temp=dummy;
    
    while(left && right)
    {
        if(left->val > right->val)
        {
            temp->next=right;
            right=right->next;
        }
        else
        {
            temp->next=left;
            left=left->next;
        }
        temp = temp->next;
    }
    
    while(left)
    {
        temp->next=left;
        left=left->next;
        temp=temp->next;
    }
    
    while(right)
    {
        temp->next=right;
        right=right->next;
        temp=temp->next;
    }
    
    return dummy->next;
}

ListNode* sortList(ListNode* head)
{
    if(head==NULL || head->next==NULL)
    {
        return head;
    }
    
    ListNode* mid=getmiddle(head);
    if(mid==NULL)
    {
        return NULL;
    }
    ListNode* left=head;
    ListNode* right=mid->next;
    mid->next=NULL;
    
    left=sortList(left);
    right=sortList(right);
    
    return merge(left,right);
}


};