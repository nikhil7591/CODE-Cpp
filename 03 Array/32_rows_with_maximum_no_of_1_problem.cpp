#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int leftMostOneRow(vector<vector<int>>&v){
    int leftMostOne = -1;
    int maxOnesRow = -1;
    int j = v[0].size()-1;
    // finding leftmost one in 0th row
    while(j>=0 && v[0][j]==1){
        leftMostOne = j;
        maxOnesRow = 0;
        j--;
    }
    // check in rest of the rows if we can find a one left to the leftMostONE
    for(int i=0;i<v.size();i++){
        while(j>=0 && v[i][j]==1){
            leftMostOne =j;
            j--;
            maxOnesRow = i;
        }
    }
    return maxOnesRow;

}

int maximumOnesRow(vector<vector<int>>&v){
    int maxOnes = INT_MIN;
    int maxOnesRow = -1;
    int col = v[0].size();
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            if(v[i][j]==1){
                int numberOfOnes = col-j;
                if(numberOfOnes>maxOnes){
                    maxOnes = numberOfOnes;
                    maxOnesRow = i;
                } 
            }
        }
    }
    return maxOnesRow;

}

int main(){

    // Given a boolean 2D array, where each row is sorted.find the row with the maximum number of 1s.
    int row,col;
    cin>>row,cin>>col;

    vector<vector<int>> v(row,vector<int> (col));
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>v[i][j];
        }
    }

    // 0 1 1 1 
    // 0 0 1 1
    // 0 0 0 1
    // int res = maximumOnesRow(v);
    int res = leftMostOneRow(v);
    cout<<res<<endl;
    return 0;

}