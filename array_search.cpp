#include<bits/stdc++.h>
using namespace std;

int linearSearch(int arr[], int n, int key){
    for(int i=0; i<n; i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}

int binarySearch(int arr[], int n, int key){
    int start=0, end=n-1;
    while(start<=end){
        int mid=(start+end)/2;
        if(arr[mid]==key) return mid;
        else if(arr[mid]<key) start=mid+1;
        else end=mid-1;
    }
    return -1;
}