#include<iostream>
using namespace std;

void insertionSort(int *arr,int n){
    for(int i=1;i<n;i++){
        int sor = arr[i];
        int j =i-1;
        while(j>=0 && arr[j]>sor){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=sor;
    }
    return;
}

void insertionSortRecursion(int *arr,int n){
    if(n==1){
        return;
    }
    insertionSortRecursion(arr,n-1);

    int sor = arr[n-1];
    int j =n-2;
    while(j>=0 && arr[j]>sor){
        arr[j+1]=arr[j];
        j--;
    }
    arr[j+1]=sor;

}

int main(){

    int arr[] = {2,6,1,5,4,3};
    int n = 6;
    //basic method by using function
    // insertionSort(arr,n);

    // insertion sort by recursion;
    insertionSortRecursion(arr,n);

    for(int i:arr){
        cout<<i<<" ";
    }


    return 0;
}