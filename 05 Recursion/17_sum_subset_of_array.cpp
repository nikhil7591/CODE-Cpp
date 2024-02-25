#include<iostream>
#include<vector>
using namespace std;
// QUE. Given an array of integers,print sums of all subsets in it. Output sums can be printed in any order.

void sumOfSubset(int *arr,int n,int idx,int sum,vector<int> &result){
    //base case
    if(idx==n){
        result.push_back(sum);
        return;
    }

    sumOfSubset(arr,n,idx+1,sum+arr[idx],result);
    sumOfSubset(arr,n,idx+1,sum,result);
     
} 

int main(){
    int n,idx,sum;
    int arr[] = {1,2,3};
    n = sizeof(arr)/sizeof(arr[0]);
    idx = 0;
    sum = 0;
    vector<int> result;
    sumOfSubset(arr,n,idx,sum,result);
    for(int i=result.size()-1;i>=0;i--){
        cout<<result[i]<<" ";
    }

    
    return 0;
}