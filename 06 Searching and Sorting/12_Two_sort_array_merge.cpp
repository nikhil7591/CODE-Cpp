#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void merge(int *arr1,int m,int *arr2,int n,int *arr3){

    int a = 0;//array1
    int b = 0;//array2
    int c = 0;//array3

    while (a<m && b<n)
    {
        if(arr1[a]<arr2[b]){
            arr3[c++] = arr1[a++];
        }
        else{
            arr3[c++]=arr2[b++];
        }
    }
    while (a<m){
        arr3[c++]=arr1[a++];
    }
    while (b<n){
        arr3[c++]=arr2[b++];
    }
    
    return;
}

int main(){
    int arr1[] = {5,8,10};
    int arr2[] = {2,7,8};

    int m = sizeof(arr1)/sizeof(arr1[0]);
    int n = sizeof(arr2)/sizeof(arr2[0]);
    int l = m+n;
    
    int num3[l];
    merge(arr1,m,arr2,n,num3);

    

    for(int i:num3){
        cout<<i<<" ";
    }
 
    return 0;
}