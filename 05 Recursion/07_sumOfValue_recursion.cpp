#include<iostream>
using namespace std;

int sumOfValueArray(int *arr,int idx,int size){
    if(idx == size-1){
        return arr[idx];
    }
    return arr[idx]+sumOfValueArray(arr,idx+1,size);
}

int main(){

    int arr[] = {2,3,5,20,15};
    int idx = 0;
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<sumOfValueArray(arr,idx,size)<<endl;

    return 0;
}