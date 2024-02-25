#include<bits/stdc++.h>
#include<iostream>
using namespace std;
// Given an array of integers 'a' that is sorted in non-decreasing order.Find the first and the last position of the given 'target' element in the sorted array. Follow 0-based indexing.
// If 'target' is not found in the array, return[-1,-1].

// my simple function:

vector<int> first_and_last_Occ(vector<int> &arr,int target,int l,int h){
    vector<int> ans = {-1,-1};
        int lo = l;
        int hi = h;
    // for first occurence
    while(lo<=hi){
        int mid = lo+(hi-lo)/2;
        if(arr[mid]>=target){
            ans[0] = mid;
            hi = mid-1; // discard left
        }
        else{
            lo = mid+1;
        }

    }
        int lo = l;
        int hi = h;
    // last occurence
    while(lo<=hi){
        int mid = lo+(hi-lo)/2;
        if(arr[mid]<=target){
            ans[1] = mid;
            lo = mid+1; // discard right
        }
        else{
            hi = mid-1;
        }
    }

    return ans;
}




int main(){

    int n,target;
    cout<<"Enter length of arr: ";
    cin>>n;
    vector<int> arr(n);
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Enter target :";
    cin>> target;
    // brute force method 
    // muje two loop lahani padegi first ko age se start kana hai jaha pe phela element mil gya break kardo or us index ko store kar lo
    // second loop backword direction se chlalo hur jaha pe first element target ke sath match ho gaya uska index lelo / forword direction me rahne do jab tak last occurence nhai melti tab tak store karte raho fir break kardo

    // by using Binary search
    int lo = 0;
    int hi = arr.size()-1;

    vector<int> result = first_and_last_Occ(arr,target,lo,hi);
    for(int i:result){
        cout<<i<<" ";
    }cout<<endl;
    
    return 0;
}