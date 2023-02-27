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
        cout << node->data; 
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

class Solution
{
    Node* rev(Node *head)
    {
        Node* curr=head;
        Node* pre=NULL;
        Node* ne;
        
        
        /*if(head==NULL || head->next==NULL)
        {
            return head;
        }*/
        
        while(curr!=NULL)
        {
            ne=curr->next;
            curr->next=pre;
            pre=curr;
            curr=ne;
        }
        
        return pre;
    }
    
    
    public:
    Node* addOne(Node *head) 
    {
        Node* temp=head;
       
        Node* dummy=new Node(1);
        Node* ans=NULL;
        temp=rev(temp);
       
      
       
       
        int carry=0,sum,num1=1;
        
        while(temp!=NULL || dummy!=NULL || carry!=0)
        {
            sum=0;
            if(temp!=NULL)
            {
                sum=sum+temp->data;
            }
            
            if(dummy!=NULL)
            {
                sum=sum+dummy->data;
            }
            sum=sum+carry;
            carry=sum/10;
            Node* newNode = new Node(sum%10);
            newNode->next=ans;
            ans=newNode;
            
            if(temp!=NULL)
            {
                temp=temp->next;
            }
            if(dummy) dummy=dummy->next;
            
        }
        
        
        return ans;
    }
    
};

//{ Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        
        Node* head = new Node( s[0]-'0' );
        Node* tail = head;
        for(int i=1; i<s.size(); i++)
        {
            tail->next = new Node( s[i]-'0' );
            tail = tail->next;
        }
        Solution ob;
        head = ob.addOne(head);
        printList(head); 
    }
    return 0; 
} 

// } Driver Code Ends