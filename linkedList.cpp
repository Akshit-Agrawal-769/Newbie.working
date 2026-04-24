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

int main(){
    
}