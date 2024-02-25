#include<bits/stdc++.h>
#include<iostream>
using namespace std;

// A rotated sorted array is a sorted array on which rotation operation has been performed some number of times. Given a rotated sorted array, find the index of the minimum element in the array. Follow 0-based indexing.
// It is guaranteed that all the element in the array are unique.

int findMinimumInSortedRotated(int arr[],int n){
    // time: O(logn)
    // space: O(1)
    if(n==1) return arr[0];
    int lo = 0;
    int hi = n-1;
    if(arr[lo]<arr[hi]){//sorted array
        return lo;
    }

    while (lo<=hi){
        int mid = lo+(hi-lo)/2;
        if(arr[mid]>arr[mid+1]){
            return mid+1;
        }
        if(arr[mid]<arr[mid-1]){
            return mid;
        }
        if(arr[mid]>arr[0]){
            lo = mid+1;
        }
        else{
            hi = mid-1;
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

    // int k;
    // cin>>k;
    // int a =0;
    // int b=k-1;

    // // how to rotate array by anticlockwise
    // int ans[n];

    // for(int i=n-k;i<n;i++){
    //     ans[a]= arr[i];
    //     a++;
        
    // }
    // for(int j=0;j<k;j++){
    //         ans[a] = arr[j];
    //         a++;
    // }
    // for(int i:ans){
    //     cout<<i<<" ";
    // }
    // int ans = 0;
    // int lo = 0,hi=n-1;
    // while(lo<=hi){
    //     int mid=lo+(hi-lo)/2;
    //     ans = mid;
    //     if(arr[mid])
    // }

    // // to find minmum element of array in which index
    // int min = 0;
    // for(int i = 1;i<n;i++){
    //     if(arr[i]<arr[min]){
    //         min = i;
    //     }
    // }
    // cout<<min<<endl;
    

    // by using binary search
    cout<<findMinimumInSortedRotated(arr,n)<<endl;
    
    return 0;
}