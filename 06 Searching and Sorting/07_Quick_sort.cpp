#include<iostream>
using namespace std;

int partion(int *arr,int first,int last){
    int pivot = arr[last];
    int i = first-1; // for inserting elements<pivot
    for(int j = first;j<last;j++){ // j for finding elements<pivot
        if(arr[j]<pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    // now i is pointing to the last element < pivot
    // correct position for pivot will be - i+1
    swap(arr[i+1],arr[last]);
    return i+1;
}

void quickSort(int *arr,int first,int last){
    if(first>=last){
        return;
    }
    
    int pi = partion(arr,first,last);
    quickSort(arr,first,pi-1);
    quickSort(arr,pi+1,last);
}

int main(){

    int num;
    cin>>num;
    int arr[num];
    for(int i=0;i<num;i++){
        cin>>arr[i];
    }

    int first = 0;
    int last = (sizeof(arr)/sizeof(arr[0]))-1;
    quickSort(arr,first,last);

    for(int i:arr){
        cout<<i<<" ";
    }

    return 0;
}