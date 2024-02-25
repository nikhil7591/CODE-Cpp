#include<iostream>
using namespace std;

int main(){

    int num;
    cin>>num;
    int temp;
    temp=num;
    // count digits in number
    int digit = 0;
    while(num>0){
        digit++;
        num = num/10;
    }
    cout<<digit<<endl;

    //sum of digits in number
    int sum = 0;
    while(temp>0){
        int digit = temp%10;
        sum+=digit;
        temp = temp/10;
    }
    cout<<sum<<endl;
    return 0;
}