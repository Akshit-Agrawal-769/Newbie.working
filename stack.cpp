#include<bits/stdc++.h>
using namespace std;

struct Stack{
    int top;
    int arr[10];
};

struct Node{
    int val;
    Node* next;
};

void push(Stack &stack, int val){
    if(stack.top>=9){
        cout<<'overflow'<<endl;
    }
    else{
        stack.top++;
        stack.arr[stack.top]=val;
    }
}

void pushLL(Node* &head,int data){
    Node* newnode = new Node;
    newnode->val=data;
    newnode->next=head;
    head=newnode;
}

void pop(Stack &stack){
    if (stack.top<0){
        cout<<'Underflow'<<endl;
    }
    else{
        cout<<stack.arr[stack.top];
        stack.top--;
    }
}

void popLL(Node* &head){
    if(head==nullptr){
        cout<<'underflow'<<' ';
        return;
    Node* temp = head;
    head=head->next;
    cout<<temp;
    delete temp;
    }
}

void traverse(Stack stack){
    int i=0;
    while (i <= stack.top){
        cout<<stack.arr[i]<<' ';
        i++;
    }
}


int main(){

    
    system("pause");
    return 0;
}
