#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left=nullptr;
    Node* right=nullptr;
    Node(int value){
        data=value;
    }
};

void inorder(Node* node){
    if (node!=nullptr){
        inorder(node->left);
        cout<<node->data<<' ';
        inorder(node->right);
    }
}

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
    return node; //returns the unchanged nodes in the recursion stack while backtracking
}  

Node* minValue(Node* node) {
    Node* cursor = node;
    while (cursor && cursor->left != nullptr) {
        cursor = cursor->left;
    }
    return cursor;
}

Node* deleteNode(Node* node,int val){
    if (node==nullptr){
        return node;
    }

    if (node->data<val){
        node->right=deleteNode(node->right,val);
    }
    if (node->data>val){
        node->left=deleteNode(node->left,val);
    }
    if (node->data==val){
        if (node->left==nullptr){ // less than 2 child
            Node* temp = node->right;
            delete node;
            return temp; //
        }
         else if (node->right==nullptr){
            Node* temp = node->left;
            delete node;
            return temp;
        }

        else{ //2 child
            Node* temp = minValue(node->right);
            node->data = temp->data;
            node->right=deleteNode(node->right,temp->data);
        }
    }
    return node;
}

int main(){
    Node* root = new Node(4);
    Node* a1 = new Node(2);
    Node* a2 = new Node(5);
    Node* b1 = new Node(1);
    Node* b2 = new Node(3);

    root->left=a1;
    root->right=a2;
    a1->left=b1;
    a1->right=b2;

    inorder(root);

    system("pause");
    return 0;

}