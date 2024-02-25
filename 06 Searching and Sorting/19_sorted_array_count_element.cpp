#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    
    int arr[] = {2,3,3,4,7,7,7,8,8};
    int target = 7;
    int lo = 0;
    int hi = 8;

    int count = 0;

    while(lo<=hi){
        int mid = lo+(hi-lo)/2;
        if(arr[mid]==target){
            count = mid;
            hi=mid-1;
        }
        else if(arr[mid]>target){
            hi = mid-1;
        }
        else{
            lo=mid+1;
        }
    }
    int count1 = -1;
    lo = 0;
    hi = 8;
    while(lo<=hi){
        int mid = lo+(hi-lo)/2;
        if(arr[mid]==target){
            count1 = mid;
            lo=mid+1;
        }
        else if(arr[mid]<target){
            lo = mid+1;
        }
        else{
            hi=mid-1;
        }
    }
    
    cout<<count1-count+1<<endl;

    return 0;
}