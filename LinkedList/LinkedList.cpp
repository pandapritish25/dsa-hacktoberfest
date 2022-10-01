#include<bits/stdc++.h>
using namespace std;
/*
 Linked List is a linear data structure.
 Multiple Blocks Of Memory Linked Together.
 Linked List Doesnt Need A Contiguous Memory.
 If Memory is Fragmented then also we can make a linked list.
 Block Of Memory - Node -> data,next.
 Head Pointer Stores the Location of First Node.
 Last Node has NEXT field as NULL.
 Insert at HEAD,TAIL,Middle,After or Before a certain ELEMENT.
 Deletion.

 Types of Linked List :
    Singly Linked list.
    Doubly Linked list.
    Circular Linked list.
    Doubly Circular Linked list.
*/
class node
{
    public:
    int data;
    node* next;

    node (int val)
    {
        data = val;
        next = NULL;
    } 
};

void insertAtHead(node* &head, int val)
{
    node* n = new node(val);
    n->next=head;
    head = n;
}

void insertAtTail(node* &head, int val)
{
    node *n = new node(val);
    if(head==NULL)
        {
            head=n;
            return;
        }
    node *temp = head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
}

void display(node* head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<"\n";
}

bool search(node* head, int key)
{
    node* temp=head;
    while(temp!=NULL)
    {
        if(temp->data==key)
            {
                return true;
            }
            temp=temp->next;
    }
    return false;
}

int main()
{
    //Linked_List
    node* head = NULL;
    insertAtTail(head,11);
    insertAtTail(head,12);
    insertAtTail(head,13);
    insertAtTail(head,14);
    insertAtTail(head,15);
    insertAtHead(head,10);
    display(head);
    cout<<search(head,10);          //Prints 1 as 10 is present after inserting at head.
    cout<<search(head,100);         //Prints 0 as 100 is not present.
    return 0;
}