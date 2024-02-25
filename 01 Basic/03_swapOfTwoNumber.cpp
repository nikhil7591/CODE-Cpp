#include<iostream>
using namespace std;

int main(){

    cout<<"Enter first number: ";
    int firstNumber;
    cin>> firstNumber;
    cout<<"Enter second number: ";
    int secondNumber;
    cin>> secondNumber;
    int temp = firstNumber;
    firstNumber = secondNumber;
    secondNumber = temp;
    cout<<"firstNumber: "<<firstNumber<<endl<<"and secondNumber: "<<secondNumber<<endl;

    return 0;
}