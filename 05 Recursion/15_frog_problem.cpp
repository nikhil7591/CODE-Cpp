#include<iostream>
using namespace std;

int frogProblem(int *arr,int n,int i){
    //base case
    if(i == n-1) return 0;
    if(i == n-2) return frogProblem(arr,n,i+1)+abs(arr[i]-arr[i+1]);
    return min(frogProblem(arr,n,i+1)+abs(arr[i]-arr[i+1]),frogProblem(arr,n,i+2)+abs(arr[i]-arr[i+2]));

}

int main(){
   // QUE. There are N stones, numbered 1,2,..., N. For each i (IsisN), the height of Stone i is hi.There is a frog who is initially on Stone 1. He will repeat the following action some number of times to reach Stone N:
        // If the frog is currently on Stone i, jump to Stone i+1 or Stone i+2. Here, a cost of |hi - hj| is incurred, where jis the stone to land on.
        // Find the minimum possible total cost incurred before the frog reaches Stone N.
        // Example:
        // Input n= 4
        // arr[] =10 30 40 20
        // Output= 30 

    int arr[] = {10,30,40,20};
    int n = sizeof(arr)/sizeof(arr[0]);
    int i = 0;
    cout<<frogProblem(arr,n,i)<<endl;

    return 0;
}