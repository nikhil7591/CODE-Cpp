#include<bits/stdc++.h>
#include<iostream>
using namespace std;

// Que:
// Search the 'target' value in a 2d integer matrix of dimensions n x m and
// return 1 if found, else rerturn 0. This matrix has the followig properties :
// 1. Integers in each row are sorted from left to right.
// 2. The first integer of each row is greater than the last integer of the
//    previous row.

// chek it is in array
// bool findTargetIn2dMatrix(vector<vector<int>> &arr,int n,int m,int target){
//     int lo = 0;
//     int hi = n*m-1;

//     while(lo<=hi){
//         int mid = lo+(hi-lo)/2;
//         int x = mid/m; // coordinate
//         int y = mid%m; // y coordinate

//         if(arr[x][y]==target){
//             return true;
//         }
//         else if(arr[x][y]<target){
//             lo = mid+1;
//         }
//         else{
//             hi = mid-1;
//         }
//     }
//     return false;
// }

// find index 
int findTargetIn2dMatrix(vector<vector<int>> &arr,int n,int m,int target){
    int lo = 0;
    int hi = n*m-1;

    while(lo<=hi){
        int mid = lo+(hi-lo)/2;
        int x = mid/m; // coordinate
        int y = mid%m; // y coordinate

        if(arr[x][y]==target){
            return x,y;
        }
        else if(arr[x][y]<target){
            lo = mid+1;
        }
        else{
            hi = mid-1;
        }
    }
    return 0;
}

int main(){

    cout<<"Enter row or column: "<<endl;
    int n;
    cin>>n;
    int m;
    cin>>m;

    vector<vector<int>> arr(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j = 0;j<m;j++){
            cin>> arr[i][j];
        }
    }

    int target;
    cout<<"Enetr target:";
    cin>>target;

    cout<< findTargetIn2dMatrix(arr,n,m,target)<<endl;

    return 0;
}