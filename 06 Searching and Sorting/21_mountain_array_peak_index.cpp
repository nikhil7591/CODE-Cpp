#include<bits/stdc++.h>
#include<iostream>
using namespace std;
// Given a mountain array 'a' of length greater than 3, return the index 'i' such that arr[0]
// <arr[1]<.....<arr[i-1] < arr[i] > arr[i+1] >...>arr[arr.length-1]. This index is known as
// the peak index.

int peakInMountainArray(int arr[],int n){
    int lo = 1;
    int hi= n-1;
    int ans = -1;
    while(lo<=hi){
        int mid = lo+(hi-lo)/2;
        if(arr[mid]> arr[mid-1]){
            // increasing curve
            ans = max(ans,mid);
            lo = mid+1;
        }
        else{
            hi = mid-1;
        }
    }
    return ans;
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