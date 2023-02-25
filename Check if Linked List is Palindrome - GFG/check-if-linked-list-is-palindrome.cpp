//{ Driver Code Starts
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
using namespace std;
/* Link list Node */
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};




// } Driver Code Ends
/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

#include <vector>

class Solution{
  public:
    //Function to check whether the list is palindrome.
    
    
    Node* getmiddle(Node *head)
    {
        if(head==NULL || head->next ==NULL)
        {
            return head;
        }
        
        if( head->next->next ==NULL)
        {
            return head->next;
        }
        
        Node* fast=head;
        Node* slow=head;
        
        while(fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next;
            if(fast!=NULL)
            {
                fast=fast->next;
            }
        }
        
        return slow;
        
    }
    
    Node* rev(Node *head)
    {
        Node *curr=head;
        Node *prev=NULL;
        Node *temp;
        while(curr!=NULL)
        {
        temp=curr->next;
        curr->next=prev;
        prev=curr;
        curr=temp;
    
        }
        
        return prev;
        
    }
    
    bool isPalindrome(Node *head)
   {
       //<!-------Approach 1---------->
       vector<int> a;
       Node *temp=head;
       
       while(temp!=NULL)
       {
           a.push_back(temp->data);
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



//{ Driver Code Starts.
/* Driver program to test above function*/
int main()
{
  int T,i,n,l,firstdata;
    cin>>T;
    while(T--)
    {
        
        struct Node *head = NULL,  *tail = NULL;
        cin>>n;
        // taking first data of LL
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        // taking remaining data of LL
        for(i=1;i<n;i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }
    Solution obj;
   	cout<<obj.isPalindrome(head)<<endl;
    }
    return 0;
}


// } Driver Code Ends