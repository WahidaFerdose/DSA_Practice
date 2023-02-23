//{ Driver Code Starts
//Initial Template for C++// C program to find n'th Node in linked list
#include <stdio.h>
#include <stdlib.h>
#include<iostream>
using namespace std;

/* Link list Node */
struct Node {
    int data;
    struct Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};



// } Driver Code Ends
/* Linked List Node structure:

struct Node
{
    int data;
    struct Node *next;
}

*/

class Solution
{
    public:
    //Function to reverse a linked list.
   
   
   struct Node* reverseL(struct Node *head, struct Node *curr, struct Node *pre)
   {
       if(curr==NULL)
       {
           head=pre;
           return head;
       }
       
       Node* forward=curr->next;
       Node* ans =reverseL(head,forward,curr);
       curr->next=pre;
       
       return ans;
 
   }
   
    struct Node* reverseList(struct Node *head)
    {
        
    if(head==NULL || head->next==NULL)
        {
            return head;
        }
        
        Node* curr=head;
        Node* pre=NULL;
        
       
        Node* tempHead=reverseL(head,curr,pre);
        
        
        return tempHead;
        
       
       
       
       
       /*Iterative Method
       Node* temp=NULL;
        Node* curr=head;
        Node* pre=NULL;
        
        while(curr!=NULL)
        {
            
            temp=curr->next;
            curr->next=pre;
            pre=curr;
            curr=temp;
        }
        head=pre;
        return pre;*/
    }
    
};
    


//{ Driver Code Starts.

void printList(struct Node *head)
{
    struct Node *temp = head;
    while (temp != NULL)
    {
       printf("%d ", temp->data);
       temp  = temp->next;
    }
}

/* Driver program to test above function*/
int main()
{
    int T,n,l,firstdata;
    cin>>T;

    while(T--)
    {
        struct Node *head = NULL,  *tail = NULL;

        cin>>n;
        
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        
        for (int i=1; i<n; i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }
        
        Solution ob;
        head = ob. reverseList(head);
        
        printList(head);
        cout << endl;
    }
    return 0;
}


// } Driver Code Ends