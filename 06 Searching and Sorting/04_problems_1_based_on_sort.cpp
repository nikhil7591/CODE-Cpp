#include<iostream>
#include<vector>
using namespace std;

int main(){

    //Que: Given an integer array arr, move all 0's to the end of it while maintaining the relative order of the non-zero elements.
    // Note that you must do this in place without making a copy of the array. 
    
    int num;
    cin>>num;
    int arr[num];
    for(int i=0;i<num;i++){
        cin>>arr[i];
    }
    
    // // In below method we use new array 
    // vector<int> ans;
    // for(int i=0;i<num;i++){
    //     if(arr[i]==0){
    //         continue;
    //     }
    //     else{
    //         ans.push_back(arr[i]);
    //     }
        
    // }
    // for(int i=0;i<num;i++){
    //     if(arr[i]==0){
    //         ans.push_back(arr[i]);
    //     }
    // }

    // for(int i:ans){
    //     cout<<i<<" ";
    // }

    // // By using bubble sort
    // for(int i=0;i<numl;i++){
    //     for(int j=0;j<num;j++){
    //         if(arr[i]!=0 &&arr[j]==0){
    //             swap(arr[i],arr[j]);
    //         }
    //     }
    // }
    // for(int i:arr){
    //     cout<<i<<" ";
    // }

    // By using two pointer method
    int left = 0;
    int right = 1;
    int n= sizeof(arr)/sizeof(arr[0]);
    //  20501
    while(left<n && right<n){
        while(left<n && arr[left]!=0)left++;
        while(right<n && arr[right] ==0)right++;
        if(left<right){
            swap(arr[right],arr[left]);
            left++;
            right++;
        }
    }
    for(int i:arr){
        cout<<i<<" ";
    }


    return 0;
}