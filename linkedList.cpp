#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next=nullptr;
    Node(int val){
        data=val;
    }
};

void traverse(Node* node){
    Node* cursor= node;
    while (cursor=nullptr){
        cout<<cursor<<endl;
        cursor=cursor->next;
    }
}

void insertHead(Node* &head, int val){
    Node* newNode=new Node(val);
    newNode->next=head;
    head=newNode;
}

void insertEnd(Node* &head, int val){
    Node* newNode=new Node(val);
    if(head==nullptr){
        head=newNode;
        return;
    }
    Node* cursor=head;
    while(cursor->next!=nullptr){
        cursor=cursor->next;
    }
    cursor->next=newNode;
}

void insertPos(Node* &head, int val, int pos){
    if(pos==0){
        insertHead(head,val);
        return;
    }
    Node* newNode=new Node(val);
    Node* cursor=head;
    for(int i=0;i<pos-1;i++){
        if(cursor==nullptr){
            cout<<"Position out of range\n";
            return;
        }
        cursor=cursor->next;
    }
    newNode->next=cursor->next;
    cursor->next=newNode;
}

// Delete at beginning
void deleteBegin(Node* &head){
    if(head==nullptr){
        cout<<"List empty\n";
        return;
    }
    Node* temp=head;
    head=head->next;
    delete temp;
}


void deleteEnd(Node* &head){
    if(head==nullptr){
        cout<<"List empty\n";
        return;
    }
    if(head->next==nullptr){  // only one node
        delete head;
        head=nullptr;
        return;
    }
    Node* cursor=head;
    while(cursor->next->next!=nullptr){
        cursor=cursor->next;
    }
    delete cursor->next;
    cursor->next=nullptr;
}


void deletePos(Node* &head, int pos){
    if(head==nullptr){
        cout<<"List empty\n";
        return;
    }
    if(pos==0){
        deleteBegin(head);
        return;
    }
    Node* cursor=head;
    for(int i=0;i<pos-1;i++){
        if(cursor->next==nullptr){
            cout<<"Position out of range\n";
            return;
        }
        cursor=cursor->next;
    }
    Node* temp=cursor->next;
    cursor->next=temp->next;
    delete temp;
}

void deleteVal(Node* &head, int val){
    if(head==nullptr){
        cout<<"List empty\n";
        return;
    }
    if(head->data==val){
        deleteBegin(head);
        return;
    }
    Node* cursor=head;
    while(cursor->next!=nullptr){
        if(cursor->next->data==val){
            Node* temp=cursor->next;
            cursor->next=temp->next;
            delete temp;
            return;
        }
        cursor=cursor->next;
    }
    cout<<"Value not found\n";
}

int main(){
    
}