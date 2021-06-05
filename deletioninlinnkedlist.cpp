// deletion of the element in the given linked list
// at head
// at tail 
// at any point
#include"bits/stdc++.h"

using namespace std;

class node{
    public:
    int data;
    node* next;
};

void insertattail(node* &head,int val){
    node* temp=new node;
    temp->data=val;
    temp->next=NULL;

    if(head==NULL){
        head=temp;
        return;
    }

    node* ptr=new node;
    ptr=head;
    while(ptr->next!= NULL){
        ptr=ptr->next;

    }
    ptr->next=temp;
    
}

void deletathead(node* &head){
    if(head==NULL){
        return;
    }
    if(head->next=NULL){
        delete head;
        return;
    }
    node* temp = new node;
    temp=head;
    head=head->next;
    delete temp;
}

void deletion(node* &head,int val){
    if(head==NULL){
        return;
    }
    node* temp =new node;
    node* ptr=new node;
    temp=head;
    while(temp->next->data != val){
        temp=temp->next;
    }
    ptr=temp->next;
    temp->next = temp->next->next;
    delete ptr;
}

void display(node* &head ){
    node* temp=new node;
    temp=head;
    while(temp!= NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;

}

int main(){
    node* head = new node;
    head=NULL;
    insertattail(head,1);
    insertattail(head,2);
    insertattail(head,3);
    insertattail(head,4);
    insertattail(head,5);
    display(head);
    deletion(head,3);
    display(head);
    deletathead(head);
    display(head);

}