#include<iostream>
using namespace std;

int main(){

    int num1,num2;
    cout<<"Enter number: ";
    cin>>num1;
    cout<<"Enter number: ";
    cin>>num2;
    cout<<"Choose which operator are use(+,-,*,/,%) ";
    char operato;
    cin>>operato;

    switch (operato)
    {
    case '+':
        int sum;
        sum = num1+num2;
        cout<<"Your Sum is: "<<sum<<endl;
        break;  
    case '-':
        int sub;
        sub = num1-num2;
        cout<<"Your Difference is: "<<sub<<endl;
        break;
    case '*':
        int multi;
        multi = num1*num2;
        cout<<"Your Product is: "<<multi<<endl;
        break;
    case '/':
        int divid;
        divid = num1/num2;
        cout<<"Your Division is: "<<divid<<endl;
        break;
    case '%':
        int modulus;
        modulus = num1%num2;
        cout<<"Your Remainder is: "<<modulus<<endl;
        break;
    default:
        cout<<"Enter a valid operator"<<endl;
        break;
    }

    return 0;
}