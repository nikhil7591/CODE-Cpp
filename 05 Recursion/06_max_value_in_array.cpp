#include<iostream>
using namespace std;

int maxValueOfArray(int *arr,int indx,int size){
    // int ans = arr[0];
    // if(arr[indx]>ans){
    //     ans = arr[indx];
    // }
    // else{
    //     maxValueOfArray(arr,indx+1,size-1);
    // }
    // return ans;

    if(indx == size-1){
        return arr[indx];
    }

    return max(arr[indx], maxValueOfArray(arr,indx+1,size)); 
}


int main(){

    int arr[]={13,21,122,200,15};
    int indx = 0;
    int size = sizeof(arr)/sizeof(arr[0]);
    int result = maxValueOfArray(arr,indx,size);
    cout<<result<<endl;
    
    return 0;
}