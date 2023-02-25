//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data <<" "; 
        node = node->next; 
    }  
    cout<<"\n";
} 


// } Driver Code Ends
//User function template for C++

/*
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution{
public:
    Node* divide(int N, Node *head){
        
        Node* eH=new Node(-1);
        Node* eT=eH;
        Node* oH=new Node(-1);
        Node* oT=oH;
        
        
        Node* temp=head;
        
        while(temp!=NULL)
        {
            int value=temp->data;
            
            if(value%2!=0)
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
        }
        
        
        if(oH->next!=NULL)
        {
            eT->next=oH->next;
        }
        else
        {
            eT->next=NULL;
        }
       
        oT->next=NULL;
            
            
       head=eH->next;
    return head;
        
    }
};

//{ Driver Code Starts.

int main() {
    //code
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int data;
        cin>>data;
        struct Node *head = new Node(data);
        struct Node *tail = head;
        for (int i = 0; i < N-1; ++i)
        {
            cin>>data;
            tail->next = new Node(data);
            tail = tail->next;
        }
        
        Solution ob;
        Node *ans = ob.divide(N, head);
        printList(ans); 
    }
    return 0;
}

// } Driver Code Ends