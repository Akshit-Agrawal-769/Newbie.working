#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* left=nullptr;
    node* right=nullptr;
    node(int value){
        data=value;
    }
};

void inorder(node* root){
    if (root!=nullptr){
        inorder(root->left);
        cout<<(root->data);
        inorder(root->right);
    }
}

void preorder(node* root){
    if (root!=nullptr){
        cout<<(root->data);
        inorder(root->left);
        inorder(root->right);
    }
}

void postorder(node* root){
    if (root!=nullptr){
        inorder(root->left);
        inorder(root->right);
        cout<<(root->data);
    }
}

int main(){
    node* root= new node(4);
    node* a= new node(1);
    node* b= new node(2);
    node* c= new node(3);
    node* d= new node(5);
    node* e= new node(6);
    node* f= new node(7);
}
