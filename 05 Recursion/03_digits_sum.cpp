#include<iostream>
using namespace std;

int sumOfDigits(int num){
    if(num>=0 && num<=9){
        return num;
    }
    int d = num%10;
    num/=10;
    return sumOfDigits(num)+d;
    // return sumOfDigits(num/10)+num%10;you can write in this way also
}

int main(){

    int num;
    cin>>num;
    cout<<sumOfDigits(num)<<endl;
    return 0;
}