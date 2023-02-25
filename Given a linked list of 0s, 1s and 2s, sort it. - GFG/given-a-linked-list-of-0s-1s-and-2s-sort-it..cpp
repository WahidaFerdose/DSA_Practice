//{ Driver Code Starts
#include <bits/stdc++.h>

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

struct Node *start = NULL;


// } Driver Code Ends
/*
 
  Node is defined as
  struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/
class Solution
{
    public:
    
    void InsertAtTail(Node *tail,Node *temp)
    {
        tail->next=temp;
        tail=temp;
    }
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        
        // Add code here
        Node* zH=new Node(-1);
        Node* zT=zH;
        Node* oH=new Node(-1);
        Node* oT=oH;
        Node* tH=new Node(-1);
        Node* tT=tH;
        
        Node* temp=head;
        
        
        
        
        while(temp!=NULL)
        {
            if(temp->data==0)
            {
            //InsertAtTail(zT,temp);
                zT->next=temp;
                zT=temp;
            }
            else if(temp->data==1)
            {
                //InsertAtTail(oT,temp);
               oT->next=temp;
               oT=temp;
               
            }
            
            else
            {
                //InsertAtTail(tT,temp);
                tT->next=temp;
                tT=temp;
            }
            
            
            temp=temp->next;
        }
        
        
        if(oH->next!=NULL)
        {
            zT->next=oH->next;
        }
        else
        {
            zT->next=tH->next;
           
        }
        
        oT->next=tH->next;
        tT->next=NULL;
     
        head=zH->next;
        
        return head;
        
    }
};


//{ Driver Code Starts.

// Function to sort a linked list of 0s, 1s and 2s
void printList(struct Node *Node) {
    while (Node != NULL) {
        printf("%d ", Node->data);
        Node = Node->next;
    }
    printf("\n");
}

/* Drier program to test above function*/
void insert(int n1) {
    int n, value, i;
    // scanf("%d",&n);
    n = n1;
    struct Node *temp;
    for (i = 0; i < n; i++) {
        scanf("%d", &value);

        if (i == 0) {
            start = new Node(value);
            temp = start;
            continue;
        } else {
            temp->next = new Node(value);
            temp = temp->next;
            temp->next = NULL;
        }
    }
}

int main() {

    int n;

    int t;
    scanf("%d", &t);

    while (t--) {
        scanf("%d", &n);

        insert(n);
        Solution ob;
        struct Node *newHead = ob.segregate(start);
        printList(newHead);
    }

    return 0;
}
// } Driver Code Ends