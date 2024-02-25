#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main(){
    // // QUE:Given a vector arr[] sorted in increasing order. Return an array of square of each number sorted in increasing order.where size of vector 1<size<101.
    
    int arr[]={-2,-1,0,1,2};
    int n = 5;

    int result[n];
    int left = 0;
    int right = n-1;
    int k = n-1;
    
    while(left<=right && k>=0){
        if(abs(arr[left])>=abs(arr[right])){
            result[k] = arr[left]*arr[left];
            left++;
            k--;
        }
        else{
            result[k]=arr[right]*arr[right];
            k--;
            right--;
        }
    }

    for(int ele:result){
        cout<<ele<<" ";
    }cout<<endl;
    

    return 0;
}