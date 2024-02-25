#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    // // 1 numerical diamond pattern
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<(n-i-1);j++){
    //         cout<<"-";
    //     }
    //     for(int j=0; j<(2*i+1);j++){
    //         cout<<j;
    //     }
    //     cout<<endl;
    // }
    // for(int i=n-2;i>-1;i--){
    //     for(int j=0;j<(n-i-1);j++){
    //         cout<<"-";
    //     }
    //     for(int j=0; j<(2*i+1);j++){
    //         cout<<j;
    //     }
    //     cout<<endl;
    // }

    // // 2 alphabet diamond pattern
    
    // for(int i=0;i<n;i++){
    //     int a = 65;
    //     for(int j=0;j<(n-i-1);j++){
    //         cout<<"-";
    //     }
    //     for(int j=0; j<(2*i+1);j++){
    //         cout<<(char)a;
    //         a++;
    //     }
    //     cout<<endl;
    // }
    // for(int i=n-2;i>-1;i--){
    //      int a = 65;
    //     for(int j=0;j<(n-i-1);j++){
    //         cout<<"-";
    //     }
    //     for(int j=0; j<(2*i+1);j++){
    //        cout<<(char)a;
    //        a++;
    //     }
    //     cout<<endl;
    // }

    // // plus pattern

    // if(n%2!=0){
    //     int mid=n/2;
    //     for(int i=0;i<n;i++){

    //         for(int j=0;j<n;j++){
    //             if(j==mid || i==mid){
    //                 cout<<"* ";
    //             }
    //             else{
    //                 cout<<"  ";
    //             }
    //         }
    //         cout<<endl;
    //     }
    // }
    // else{
    //     cout<<"Enter only odd number"<<endl;
    // }

    // // prime number pyramid traingle
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<(n-i-1);j++){
    //         cout<<"-";
    //     }
    //     for(int j=2;j;j++){

    //     }
    //     cout<<endl;
    // }
    

    return 0;
}