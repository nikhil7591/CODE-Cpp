#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

void rotateArray(vector<vector<int>>&v){
    //transpose
    for(int i=0;i<v.size();i++){
        for(int j=0;j<i;j++){
            swap(v[i][j],v[j][i]);
        }
    }

    // reverse every row
    for(int i=0;i<v.size();i++){
        reverse(v[i].begin(),v[i].end());
    }
    return;
}

// 1 2 3
// 4 5 6
// 7 8 9

int main(){

    // QUE: Given a sqaure martix,turn it by 90 degree in a clockwise direction without using any extra space
    int n;
    cin>>n;

    vector<vector<int>> v(n,vector<int> (n));

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>v[i][j];
        }
    }

    rotateArray(v);

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<v[i][j]<<" ";
        }cout<<endl;
    }
    return 0;
}