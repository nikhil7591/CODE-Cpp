#include<iostream>

using namespace std;
// by using recursion
void bubbleSort(int *arr,int n){
    if (n==1){
        return;
    }
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    bubbleSort(arr,n-1);
}

int main(){

    int arr[]={5,1,3,6,2,7,4};
    int n = 7;
    // // by using for loop 
    // for(int i = 0;i<n;i++){
    //     for(int j = i+1;j<n;j++){
    //         if(arr[i]>arr[j]){
    //             int temp = arr[i];
    //             arr[i] = arr[j];
    //             arr[j]= temp;
    //         }
    //     }
    // }

    bubbleSort(arr,n);

    // // optimize of bubble sort thos optimize work only when nearest sort element hoga
    // for(int i = 0;i<n;i++){
    //     bool flag = true;
    //     for(int j = i+1;j<n;j++){
    //         if(arr[i]>arr[j]){
    //             flag = false;
    //             int temp = arr[i];
    //             arr[i] = arr[j];
    //             arr[j]= temp;
    //         }
    //     }
    //     if(flag == true){
    //         break;
    //     }
    // }

    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}