#include<iostream>
using namespace std;
// function represents whether x is present in thr range [i,n-1] or not?
bool targetExistArray(int *arr,int n,int target,int i){
    if(i==n){
        //array is exheusted
        return false;
    }
    return (arr[i]==target) || targetExistArray(arr,n,target,i+1);
}

int main(){

    int arr[]={1,2,3,4,5};
    int target = 2;
    int i = 0;
    int n = sizeof(arr)/sizeof(arr[0]);

    bool result = targetExistArray(arr,n,target,i);
    if(result == true){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }

    return 0;
}