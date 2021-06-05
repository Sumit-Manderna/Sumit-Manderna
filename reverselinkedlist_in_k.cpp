// you have to reverse the linked list in th eorder of k

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

void display(node* &head ){
    node* temp=new node;
    temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;

}

node* reversein_korder(node* &head , int k){
    
    
    node* previous =new node;
    previous=NULL;
    node* current=new node;
    current=head;
    node* nextptr=new node;
    
    int count=0;
    while(current!=NULL && count<k){
        nextptr=current->next;
        current->next=previous;
        previous=current;
        current=nextptr;
        count++;


    }
    if(nextptr!=NULL){
    head->next=reversein_korder(nextptr,k);

    }
    return previous;
}


int main(){
    node* head=NULL;
    // head=NULL;
    insertattail(head,1);
    insertattail(head,2);
    insertattail(head,3);
    insertattail(head,4);
    insertattail(head,5);
    display(head);
    int k=2;
    node* newhead=new node;
    newhead=reversein_korder(head,k);
    display(newhead);
}