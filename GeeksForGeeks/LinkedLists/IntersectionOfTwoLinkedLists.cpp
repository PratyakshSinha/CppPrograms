// { Driver Code Starts
//

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

Node* inputList(int size)
{
    Node *head, *tail;
    int val;
    
    cin>>val;
    head = tail = new Node(val);
    
    while(--size)
    {
        cin>>val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
}


 // } Driver Code Ends
/* structure of list node:

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

*/

class Solution{
  public:
    Node* findIntersection(Node* head1, Node* head2)
    {
        set<int> Set2;
        Node *returnListHead, *returnListTail;
        bool flag = true;
        while(head2!=NULL)
        {
            Set2.insert(head2->data);
            head2 = head2->next;
        }

        while(head1!=NULL)
        {
            if(Set2.find(head1->data)!=Set2.end())
                {
                    if(flag)
                    {
                        returnListHead = returnListTail = new Node(head1->data);
                        flag = false;
                    }
                    else
                    {
                        returnListTail->next = new Node(head1->data);
                        returnListTail = returnListTail->next;
                    }
                }

                head1 = head1->next;
        }

        return returnListHead;
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    
	    cin>> n;
	    Node* head1 = inputList(n);
	    
	    cin>>m;
	    Node* head2 = inputList(m);
	    Solution obj;
	    Node* result = obj.findIntersection(head1, head2);
	    
	    printList(result);
	    cout<< endl;
	}
	return 0;
}
  // } Driver Code Ends