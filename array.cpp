#include<bits/stdc++.h>
using namespace std;

int main(){

    int arr[]={0,1,3,4,5};
    int n=5;
    int p=3;
    int val=2;


    //traversal
    for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
}

    // insertion
    for(int i=n; i>p; i--){
        arr[i]=arr[i-1];
    }
    arr[p]=val;
    n++;


    //deletion
    for(int i=p; i<n-1; i++){
        arr[i]=arr[i+1];
    }
    n--;
}