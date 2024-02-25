#include<iostream>
using namespace std;

int pathmXn(int i,int j,int m,int n){
    if(i==n-1 && j==m-1){
        return 1;
    }
    if(i>=m || j>=n){
        return 0;
    }

    return pathmXn(i+1,j,m,n)+pathmXn(i,j+1,m,n);
}

int main(){

    int m,n;
    cin>>m>>n;

    cout<<pathmXn(0,0,m,n)<<endl;

    return 0; 
}