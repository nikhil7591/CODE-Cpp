#include<iostream>
#include<vector>
using namespace std;



int main(){
    
    // Write a program to display multiplication of two matrices entered by the user.
    cout<<"enter row and column ,row and column should be equal for multipication: "<<endl;
    
    cout<<"M1"<<endl;
    int row1,col1;
    cin>>row1,cin>>col1;

    int arr1[row1][col1];

    for(int i=0;i<row1;i++){
        for(int j=0;j<col1;j++){
            cin>>arr1[i][j];
        }
    }

    cout<<"M2"<<endl;
    int row2,col2;
    cin>>row2,cin>>col2;

    int arr2[row2][col2];

    for(int i=0;i<row2;i++){
        for(int j=0;j<col2;j++){
            cin>>arr2[i][j];
        }
    }

    if(col1==row2){

        int result[row1][col2];
        for(int i=0;i<row1;i++){
            for(int j=0;j<col2;j++){
                int a=0;
                for(int k=0;k<col1;k++){
                    a+=arr1[i][k]*arr2[k][j];
                    result[i][j] = a;
                }
            }
        }

        for(int i=0;i<row1;i++){
            for(int j=0;j<col2;j++){
                cout<<result[i][j]<<" ";
            }cout<<endl;
        }
    }
    else{
        cout<<"Multipication are not possible "<<endl;
    }

    return 0;
}