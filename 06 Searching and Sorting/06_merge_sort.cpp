#include<iostream>
#include<vector>
using namespace std;

void merge(int *arr,int l, int mid,int r){

    int a = mid-l+1;
    int b = r-mid;
    //create 2 temp arrays    
    int arrA[a],arrB[b];
    for(int i =0;i<a;i++){
        arrA[i]=arr[l+i];
    }
    for(int i =0;i<b;i++){
        arrB[i]=arr[mid+1+i];
    }


    int i=0;// initial index of first subarray,arrA
    int j=0;// initial index of second subarray,arrB
    int k=l;// initial index of merged subarray

    while(i<a && j<b){
        if(arrA[i]<arrB[j]){
            arr[k++]=arrA[i++];
        }
        else{
            arr[k++]=arrB[j++];
        }
    }
    while(i<a){
        arr[k++]=arrA[i++];
    }
    while (j<b)
    {
        arr[k++]=arrB[j++];
    }

}


void mergeSort(int *arr ,int l, int r){
    //base case
    if(l>=r){
        return;
    }
    //find mid
    int mid = (l+r)/2;
    // split array
    mergeSort(arr,l,mid);
    mergeSort(arr,mid+1,r);
    // merge array
    merge(arr,l,mid,r);
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int left = 0;
    int right = n-1;
    mergeSort(arr,left,right);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}