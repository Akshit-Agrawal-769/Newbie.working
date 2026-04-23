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

void preorder(node* root){
    if (root!=nullptr){
        cout<<root->data<<' ';
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(node* root){
    if (root!=nullptr){
        postorder(root->left);
        postorder(root->right);
        cout<<root->data<<' ';
    }
}

node* populate(){
    int val;
    cin>>val;
    if(val==-1) return nullptr;

    node* root=new node(val);
    cout<<"Enter left beti of "<<val<<": ";
    root->left=populate();
    cout<<"Enter right beti of "<<val<<": ";
    root->right=populate();

    return root;
}


int main(){
    // node* root= new node(4);
    // node* a1= new node(2);
    // node* a2= new node(6);
    // node* l1= new node(1);
    // node* l2= new node(3);
    // node* l3= new node(5);
    // node* l4= new node(7);

    // root->left=a1;
    // root->right=a2;
    // a1->left=l1;
    // a1->right=l2;
    // a2->left=l3;
    // a2->right=l4;

    cout<<"Enter root: ";
    node* root=populate();
    cout<<"\nInorder: ";

    inorder(root);
    cout<<endl;

    system("pause");
    return 0;
}