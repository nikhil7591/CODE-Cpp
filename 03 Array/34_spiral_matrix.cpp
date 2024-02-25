#include<iostream>
#include<vector>
using namespace std;

void spiralOrder(vector<vector<int>> &martix){

    int left = 0;
    int right = martix[0].size()-1;
    int top = 0;
    int bottom = martix.size()-1;

    int direction = 0;
    while(left<=right && top<=bottom){
        // left to right when direction variable is 0
        if(direction == 0){
            for(int col=left;col<=right;col++){
                cout<<martix[top][col]<<" ";
            }
            top++;
        }

        //top to bottom
        else if(direction == 1){
            for(int row = top;row<=bottom;row++){
                cout<<martix[row][right]<<" ";
            }
            right--;
        }

        // right to left
        else if(direction==2){
            for(int col = right;col>=left;col--){
                cout<<martix[bottom][col]<<" ";
            }
            bottom--;
        }
        // bottom to top
        else{
            for(int row = bottom;row>=top;row--){
                cout<<martix[row][left]<<" ";
            }
            left++;
        }
        direction = (direction+1)%4;
        //0,1,2,3
    }

}

int main(){

    // Given an martix a, return all elements of the martix in spiral order
    int n,m;
    cin>>n>>m;
    vector<vector<int>> martix(n,vector<int>(m));

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>martix[i][j];
        }
    }

    spiralOrder(martix);

    return 0;
}