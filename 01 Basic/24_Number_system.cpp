#include<iostream>
using namespace std;

int main(){

    // // binary to decimal
    // int num;
    // cout<<"Enter a binary number: ";
    // cin>>num;
    // int dec = 0;
    // int pow=1;
    // while(num>0){
    //     int digit = num%10;
    //     dec+=digit*pow;
    //     pow*=2;
    //     num/=10;
    // }
    // cout<<dec<<endl;

    // //decimal to binary
    int num;
    cout<<"Enter a decimal number: ";
    cin>>num;
    int bin = 0;
    int pow = 1;
    while(num>0){
        int digit = num%2;
        bin += digit*pow;
        pow*=10;
        num/=2;
    }
    cout<<bin<<endl;

    return 0;
}