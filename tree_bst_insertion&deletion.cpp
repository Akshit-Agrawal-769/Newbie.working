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

void inorder(node* node){
    if (node!=nullptr){
        inorder(node->left);
        cout<<root->data<<' ';
        inorder(node->right);
    }
}

node* insert(node* node,int val){
    if (node==nullptr){
        node = new node(val);
        return node;
    }
    if (val< node->data){
        node->left=insert(node->left, val);
    }
     if (val> node->data){
        node->right=insert(node->right, val);
    } 
    return node; //returns the unchanged nodes in the recursion stack while backtracking
}  

int main(){
    node* root = new node(4);
    node* a1 = new node(2);
    node* a2 = new node(5);
    node* b1 = new node(1);
    node* b2 = new node(3);

    root->left=a1;
    root->right=a2;
    a1->left=b1;
    a1->right=b2;

    inorder(root);

    system("pause");
    return 0;

}