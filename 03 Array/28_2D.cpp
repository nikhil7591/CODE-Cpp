#include<iostream>
#include<vector>
using namespace std;

int main(){
    
    // how to input 2d array
    int row,col;
    cout<<"Enter number of row and col by space: ";
    cin>>row,cin>>col;

    int arr[row][col];

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }


    return 0;
}