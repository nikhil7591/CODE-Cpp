#include<bits/stdc++.h>
#include<iostream>
using namespace std;
// Que:
// A peak element is an element that is stricrtly greater than its neighbors.
// Given a 0-indexed integer array nums, find a peak element, and return its index.
// If the array contains multiple peaks, return the index to any of the peaks.
// You may imagine that nums[-1] = nums[n] = -infinity. In other words, an element is
// always considered to be strictly greater than a neighbor that is outside the array.

int peakInMountainArray(int arr[],int n){
    int lo = 0;
    int hi = n-1;
    while(lo<=hi){
        int mid = lo+(hi-lo)/2;
        if(mid == 0){
            if(arr[mid]> arr[mid+1]){
                return 0;
            }
            else{
                return 1;
            }
        }
        else if(mid = n-1){
            if(arr[mid]>arr[mid-1]){
                return n-1;
            }
            else{
                return n-2;
            }
        }
        else{
            if(arr[mid]> arr[mid+1] and arr[mid]>arr[mid-1]){
                return mid;
            }
            else if(arr[mid]>arr[mid-1]){
                lo = mid+1;
            }
            else{
                hi = mid-1;
            }
        }
    }
    return -1;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<peakInMountainArray(arr,n)<<endl;

    return 0;
}