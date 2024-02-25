#include<iostream>
using namespace std;

int main(){
    int num1,num2,num3;
    cout<<"Enter first number ";
    cin>>num1;
    cout<<"Enter second number ";
    cin>>num2;
    cout<<"Enter third number ";
    cin>>num3;

    if(num1>num2 && num1>num3){
        cout<<"Your greater number is: "<<num1<<endl;
    }
    else if(num2>num1 && num2>num3){
        cout<<"your greater number is: "<<num2<<endl;
    }
    else{
        cout<<"your greater number is: "<<num3<<endl;
    }
    return 0;
}