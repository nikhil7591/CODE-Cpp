#include<bits/stdc++.h>
#include<iostream>
using namespace std;

// find the first occurence of a given element x, given that the given array is sorted. If no occurence of x is found then return -1.
// time: O(logn)
// sapce: O(1)

int firstOccurence(int arr[],int target,int size){
    int lo = 0;
    int hi = size-1;
    int ans = -1;

    while(lo<=hi){
        int mid = lo+(hi-lo)/2;
        
        if(arr[mid]== target){
            ans = mid;
            hi = mid-1;
        }
        else if (arr[mid]<target){
            lo = mid+1;
        }
        else{
            hi = mid-1;
        }
    }

    return ans;

}

int main(){
    
    int arr[] = {2,5,5,5,6,6,9,9,9,9};
    for(int i:arr){
        cout<<i<<" ";
    }cout<<endl;
    int size = sizeof(arr)/sizeof(arr[0]);
    int target;
    cout<<"target: ";
    cin>>target;

    cout<< firstOccurence(arr,target,size)<<endl;

    return 0;
}