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
        inorder(root->right);
    }
}

node* search(node* root, int val){
    node* cursor =root;
    while (cursor!=nullptr){
        if (cursor->data==val){
            return cursor;
        }
        else if (cursor->data>val){
            cursor=cursor->left;
        }
        else{
            cursor=cursor->right;
        }
    }
    return cursor;
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

    node* find = search(root,5);
    if (find==nullptr){
        cout<<"f off";
    }
    else{
        cout<<"yay";
    }

    system("pause");
    return 0;
}