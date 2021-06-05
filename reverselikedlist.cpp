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

node* reverserecursion(node* &head){
    if(head == NULL || head->next== NULL){
        return head;
    }
    node* newhead=new node;
    newhead=reverserecursion(head->next);
    head->next->next=head;
    head->next=NULL;

    return newhead;
}

node* reverse(node* &head){

    node* previous= new node;
    previous=NULL;
    node* current=new node;
    current=head;
    node* nextptr=new node;
    
    while(current!= NULL){
       
        nextptr=current->next;
        current->next=previous;
        
        previous=current;
        current=nextptr;
    }

    return previous;
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



int main(){
    node* head=NULL;
    
    insertattail(head,1);
    insertattail(head,2);
    insertattail(head,3);
    insertattail(head,4);
    display(head);
    node* newhead= new node;
    newhead=reverserecursion(head);
    display(newhead);
   
}