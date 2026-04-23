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
        cout<<root->data<<' ';
        inorder(root->left);
    }
}

node* search(node* root, int val){
    
}