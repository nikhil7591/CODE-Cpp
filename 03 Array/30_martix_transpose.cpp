#include<iostream>
#include<vector>
using namespace std;

int main(){
    
    // write a program to display transpose of martix entered by the user    
    cout<<"M1"<<endl;
    int row1,col1;
    cin>>row1,cin>>col1;

    int arr1[row1][col1];

    for(int i=0;i<row1;i++){
        for(int j=0;j<col1;j++){
            cin>>arr1[i][j];
        }
    }

    // Now transpose matrix
    int result[col1][row1];
    for(int i=0;i<row1;i++){
        for(int j=0;j<col1;j++){
            result[j][i]=arr1[i][j];
        }
    }
    for(int i=0;i<col1;i++){
            for(int j=0;j<row1;j++){
                cout<<result[i][j]<<" ";
            }cout<<endl;
        }

    return 0;
}