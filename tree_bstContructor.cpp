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

Node* bst_constructor(int sortedArr,int start, int end){
    int mid=(start+end)/2;
}

int main(){


    system("pause");
    return 0;
}