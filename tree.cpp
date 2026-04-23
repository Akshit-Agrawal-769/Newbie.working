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
   
}
