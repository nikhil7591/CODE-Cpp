#include<bits/stdc++.h>
#include<iostream>
using namespace std;
// QUE: Write a programe to find Kth smallest element in an array using QuickSort.

int partitions(int *arr,int l,int r){
    int pivot = arr[r];
    int i = l-1;
    for(int j = l;j<r;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[r]);
    return i+1;
}

int Kth_Smallest(int *arr, int l,int r, int k){
    if(k>0 && k<=r-l+1){
        int pos = partitions(arr,l,r);
        if(pos-l == k-1){
            return arr[pos];
        }
        else if(pos-l > k-1){
            return Kth_Smallest(arr,l,pos-1,k);
        }
        else{
            return Kth_Smallest(arr,pos+1,r,k-pos+l-1);
        }
    }

    return -1;
}

int main(){

    int num;
    cout<<"enter length of array: ";
    cin>>num;
    int arr[num];
    for(int i =0; i<num;i++){
        cout<<"Enter "<<i+1<<" element: ";
        cin>>arr[i];
    }

    int k;
    cout<<"Enter index to find element: ";
    cin>>k;

    int l = 0;
    int r = num-1;
    cout<<Kth_Smallest(arr,l,r,k)<<endl;
    
    return 0;
}