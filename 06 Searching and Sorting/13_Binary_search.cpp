#include<bits/stdc++.h>
#include<iostream>
using namespace std;

// time complexcity: O(log n)
// sapce complexcity: O(1)

int binarysearch(int arr[],int tar){
    //define search space
    int lo = 0;
    int hi= 8;// size of array -1
    while(lo<=hi){
        // calculate the mid point for the surface space
        int mid = (lo+hi)/2;
        if(tar == arr[mid]) return mid;
        else if(arr[mid]<tar){
            // discard the left of mid
            lo = mid+1;
        }
        else{
            // discard the right of mid
            hi = mid-1;
        }
    }
    return -1;
}

int main(){
    
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int target = 2;
    cout<<binarysearch(arr,target)<<endl;

    return 0;
}