// to apppend the last k values of the linked list to the starting of the linked list 

#include"bits/stdc++.h"

using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val){
        data=val;
        next=NULL;
    }

};

void insertattail(node* &head,int val){
    node* temp=new node(val);
    

    if(head==NULL){
        head=temp;
        return;
    }

    node* ptr=head;
    
    while(ptr->next!= NULL){
        ptr=ptr->next;

    }
    ptr->next=temp;
    
}

int lenght(node* head){
    int l=0;
    node* temp=head;
    while(temp!=NULL){
        l++;
        temp=temp->next;
    }
    return l;
}

void kappend(node* &head,int k){
   
    int l=lenght(head)-k;
    
    node* newhead;
    node* newtail;
    node* tail=head;
    int count=1;
    while(tail->next!=NULL){
        if(count==l){
            newtail=tail;
            newhead=tail->next;
        }
        tail=tail->next;
        count++;
    }
    newtail->next=NULL;
    tail->next=head;
    head=newhead;

    
}

void display(node* &head ){
    node* temp=head;
    
    while(temp!= NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;

}

int main(){
    node* head = NULL;
    
    insertattail(head,1);
    insertattail(head,2);
    insertattail(head,3);
    insertattail(head,4);
    insertattail(head,5);
    insertattail(head,6);
    insertattail(head,7);

    display(head);
    kappend(head,3);
    display(head);
}