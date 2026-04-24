#include<bits/stdc++.h>
using namespace std;

struct Stack{
    int top;
    int arr[10];
};

void push(Stack &stack, int val){
    if(stack.top>=9){
        cout<<'overflow'<<endl;
    }
    else{
        stack.top++;
        stack.arr[stack.top]=val;
    }
}

void pop(Stack &stack){
    if (stack.top<0){
        cout<<'Underflow'<<endl;
    }
    else{
        cout<<stack.arr[stack.top];
        stack.top--;
    }
}

void traverse(Stack stack){
    int i=0;
    while (i <= stack.top){
        cout<<stack.arr[i]<<' ';
        i++;
    }
}