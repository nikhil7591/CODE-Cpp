#include<bits/stdc++.h>
#include<iostream>
using namespace std;

// Given the rotated sorted array of integers, which contains distinct element, and an integer target, return the index of target if it is in the array. Otherwise return -1.

int targetIndexRotatedArray(int arr[],int n,int target){
    // time: O(logn)
    // space: O(1)
    int lo =0;
    int hi = n-1;
    if(arr[lo]<arr[hi]) return lo;
    while (lo<=hi){
        int mid = lo+(hi-lo)/2;
        if(arr[mid]==target){
            return mid;
        }
        if(arr[mid]>=arr[lo]){
            if(target >= arr[lo] and target <= arr[mid]){
                hi = mid-1;
            }
            else{
                lo = mid+1;
            }
        }
        else{
            if(target  >= arr[mid] and target<=arr[hi]){
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
    int target;
    cout<<"Enter the target: ";
    cin>>target;

    // binary search function
    cout<< targetIndexRotatedArray(arr,n,target)<<endl;
    
    return 0;
}