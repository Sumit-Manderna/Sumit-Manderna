// creating and inserting values in a doubly linked list
// also deleting the values from doubly linked list 
#include "bits/stdc++.h"

using namespace std;

class node
{
public:
    int data;
    node *next;
    node *previous;

    node(int val)
    {
        data = val;
        next = NULL;
        previous = NULL;
    }
};

void insertathead(node *&head, int val)
{

    node *n = new node(val);
    n->next = head;
    if (head != NULL)
    {

        head->previous = n;
    }

    head = n;
}

void doublelinkedlist(node *&head, int val)
{
    node *temp = new node(val);

    if (head == NULL)
    {
        insertathead(head, val);
        return;
    }
    node *ptr = head;

    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = temp;
    temp->previous = ptr;
}

void deletionattail(node *&head)
{
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->previous->next = NULL;
    temp->previous = NULL;
    delete temp;
}

void deletionathead(node *&head)
{
    node *temp = head;
    head = head->next;
    head->previous = NULL;
    temp->next = NULL;
    delete temp;
}

void deletionofgivennode(node *&head, int val)
{
    node *temp = head;
    while (temp->next != NULL)
    {
        if (temp->data == val)
        {
            temp->next->previous = temp->previous;
            if (temp->next != NULL)
            {

                temp->previous->next = temp->next;
            }
            delete temp;
        }
        temp = temp->next;
    }
}

void display(node *head)
{
    node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main()
{
    node *head = NULL;

    doublelinkedlist(head, 1);
    doublelinkedlist(head, 2);
    doublelinkedlist(head, 3);
    doublelinkedlist(head, 4);
    doublelinkedlist(head, 5);
    display(head);
    insertathead(head, 6);
    insertathead(head, 7);
    insertathead(head, 8);
    display(head);
    deletionattail(head);
    display(head);
    deletionathead(head);
    display(head);
    deletionofgivennode(head, 6);
    display(head);
    return 0;
}