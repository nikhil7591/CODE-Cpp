#include<iostream>
using namespace std;

int main(){

    int row;
    cin>>row;
    for(int i=1;i<=row;i++){
        for(int j=i;j<=row;j++){
            cout<<j<<" ";
        }
        for(int j=1;j<=i-1;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}