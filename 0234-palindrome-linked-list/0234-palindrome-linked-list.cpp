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
    

    
    bool isPalindrome(ListNode* head) {
        
      vector<int> a;
       ListNode *temp=head;
       
       while(temp!=NULL)
       {
           a.push_back(temp->val);
           temp=temp->next;
       }
       
       int n=a.size();
       int s=0,e=n-1;
       
           while(s<=e)
           {
               if(a[s]!=a[e])
               {
                   return 0;
               }
               s++;
               e--;
           }
           return 1;
        
    }
};