// creation and insertion in linked list also the searching in a linked list 
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

void insertAtHead(node* &head ,int val){
    node* temp=new node;
    temp->data=val;
    temp->next=head;
    head = temp;


}

bool searchll(node* head ,int key){
    node* temp=new node;
    temp=head;
    while(temp!=NULL){
        if(temp->data==key){
            return true;
        }
        temp=temp->next;
    }
    return false;
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
    insertAtHead(head,5);
    insertAtHead(head,6);
    display(head);
    cout<<searchll(head,3);

}