#include<bits/stdc++.h>
#include<iostream>
using namespace std;

// Time complexity: O(logn)
// space complexity: O(logn)

int binarysearcRecursive(int arr[],int target,int lo,int hi){


    if(lo>hi)return -1;
    int mid = (lo+hi)/2;
    // modify mid formula you can use anywhere
    int mid = lo + (hi-lo)/2;// firstly subtract lo in hi and divide by 2 + lo
    

    if(target == arr[mid] ) return mid;
    else if(target>arr[mid]){
        return binarysearcRecursive(arr,target,mid+1,hi);
    }
    else{
        return binarysearcRecursive(arr,target,lo,mid-1);
    }
    

}

int main(){
    
    
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int target = 80;
    int lo = 0;
    int hi = sizeof(arr)/sizeof(arr[0])-1;
    cout<<binarysearcRecursive(arr,target,lo,hi)<<endl;
    return 0;
}