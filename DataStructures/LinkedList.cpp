#include<iostream>
#include<process.h>
using namespace std;

class node {
public:
    int data;
    node* next;
}*start, *newptr, *save, *ptr;

node *createNewNode(int);
void insertBeginning(node*);
void display(node*);

/*
| The pointer start points to the beginning of the list
|
| Function createNewNode() takes one integer argument, allocates memory to create a new node and returns the pointer to the new node(return type:Node*)
| 
| Function insertBeginning() takes node* type pointer as argument and inserts this node in the beginning of the list
|
| Function Display() takes node* type pointer as argument and displays the list from this pointer till the end of the list
*/

int main()
{
    start = NULL;
    int inf;
    char ch  = 'Y';
    while(ch == 'y'||ch == 'Y')
    {
        system("cls");
        cout<<"\nEnter info for the new node...";
        cin>>inf;
        cout<<"\nCreating new node!!";
        system("pause");
        newptr = createNewNode(inf);
        if(newptr!=NULL)
        {
            cout<<"\n\nNew node created Successfully.";
            system("pause");
        }
        else
        {
            cout<<"\nCannot create new node!!! Aborting\n";
            system("pause");
            exit(1);
        }
        cout<<"\nNow insterting this node at beginning of the list...";
        system("pause");
        insertBeginning(newptr);
        cout<<"Now the list is:\n";
        display(start);
        cout<<"\n Press Y to enter more nodes, N to exit...\n";
        cin>>ch;
    }
    return 0;
}

node * createNewNode(int n)
{
    ptr = new node;
    ptr->data = n;
    ptr->next = NULL;
    return ptr;
}
void insertBeginning(node* np)
{
    if(start == NULL)
        start = np;
    else
    {
        save = start;
        start = np;
        np->next = save;
    }
}
void display(node* np)
{
    while(np!=NULL)
    {
        cout<<np->data<<" ->";
        np = np->next;
    }
    cout<<"!!!\n";
}
