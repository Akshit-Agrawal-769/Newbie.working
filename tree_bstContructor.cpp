#include<bits/stdc++.h>
using namespace std;

struct Node{
    Node* left=nullptr;
    Node* right=nullptr;
    int data;
    Node(int val){
        data=val;
    }
};

Node* bst_constructor(int arr[], int start, int end){
    if(start > end) return nullptr;      

    int mid=(start+end)/2;
    Node* root=new Node(arr[mid]);

    root->left=bst_constructor(arr, start, mid-1);
    root->right=bst_constructor(arr, mid+1, end);

    return root;
}

void inorder(Node* root){
    if(root!=nullptr){
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
}

int main(){
    int arr[]={1,2,3,4,5,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);

    Node* root=bst_constructor(arr, 0, n-1);
    inorder(root); // prints: 1 2 3 4 5 6 7

    system("pause");
    return 0;
}