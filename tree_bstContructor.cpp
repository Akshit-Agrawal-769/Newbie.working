#include<bits/stdc++.h>
using namespace std;

struct Node
{
    Node* left=nullptr;
    Node* right=nullptr;
    int data;
    Node(int val){
        data=val;
    }
};

Node* insert(Node* node,int val){
    if (node==nullptr){
        node = new Node(val);
        return node;
    }
    if (val< node->data){
        node->left=insert(node->left, val);
    }
     if (val> node->data){
        node->right=insert(node->right, val);
    } 
    return node;
}  



int main(){


    system("pause");
    return 0;
}