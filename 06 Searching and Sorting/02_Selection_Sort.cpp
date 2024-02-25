#include<iostream>
using namespace std;

void selectionSort(int *arr,int n){
    cout<<"hello"<<endl;
    for(int i =0 ;i<n;i++){
        int min = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min = j;
            }
        }
        if(min!=i){
            swap(arr[i],arr[min]);
        }
    }
    return;
}

int main(){

    int arr[]= {2,4,1,5,6,3};
    int n = 6;

    // // using basic method
    // for(int i =0 ;i<n-1;i++){
    //     int min = i;

    //     for(int j=i+1;j<n;j++){
    //         if(arr[j]<arr[min]){
    //             min = j;
    //         }
    //     }
    //     if(min != i){
    //         swap(arr[i],arr[min]);
    //     }
    // }

    // using function
    selectionSort(arr,n);

    for(int i:arr){
        cout<<i<<" ";
    }


    return 0;
}