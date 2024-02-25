#include<iostream>
using namespace std;

int main(){

    int num1 = 6;
    int num2 = 3;

    // Airthmetic operators
    cout<<"Airthmetic operators"<<endl<<endl;

    cout<<"Addition "<<num1+num2<<endl;
    cout<<"Subtraction "<<num1-num2<<endl;
    cout<<"Multiplication "<<num1*num2<<endl;
    cout<<"Division "<<num1/num2<<endl;
    cout<<"Modulus "<<num1%num2<<endl;
    cout<<"Incriment "<<num1++<<" and "<<num2++<<endl;
    cout<<"Decriment "<<--num1<<" and "<<--num2<<endl<<endl;

    // Relational operators
    cout<<"Relational operators"<<endl<<endl;
    cout<<"is Equal to: "<< (num1 == num2)<<endl;
    cout<<"is not Equal to: "<< (num1 != num2)<<endl;
    cout<<"Greater than: "<< (num1 > num2)<<endl;
    cout<<"Greater than and equal to: "<< (num1 >= num2)<<endl;
    cout<<"Less than: "<< (num1 < num2)<<endl;
    cout<<"Less than and equal to: "<< (num1 <= num2)<<endl<<endl;

    // Logical operators
    cout<<"Logical operators"<<endl<<endl;

    cout<<"Logical AND: "<< (num1 && num2)<<endl;
    cout<<"Logical NOT: "<< (!num1 << !num2)<<endl;
    cout<<"Logical OR: "<< (num1 || num2)<<endl<<endl;  

    // Assignment operators
    cout<<"Assignment operators"<<endl<<endl;

    cout<<"Equal: "<< (num1 = num2)<<endl;
    cout<<"is + Equal to: "<< (num1 += num2)<<endl;
    cout<<"is - Equal to: "<< (num1 -= num2)<<endl;
    cout<<"is * Equal to: "<< (num1 *= num2)<<endl;
    cout<<"is / Equal to: "<< (num1 /= num2)<<endl;
    cout<<"is '%' Equal to: "<< (num1 %= num2)<<endl<<endl;

    // Bitwise operators
    cout<<"Bitwise operators"<<endl<<endl;

    cout<<"compliment: "<< ~num1 << ~num2<<endl;
    cout<<"left shift: "<< (num1 << num2)<<endl;
    cout<<"OR: "<< (num1 | num2)<<endl;
    cout<<"AND: "<< (num1 & num2)<<endl;
    cout<<"XOR: "<< (num1 ^ num2)<<endl;
    cout<<"right shift: "<< (num1 >> num2)<<endl<<endl;

    // Misc operators
    cout<<"Misc operators"<<endl<<endl;

    cout<<"Sizeof operator syntax is Sizeof() "<<sizeof(num1)<<endl;
    cout<<"Ternri operator syntax Condition?    Expression1: Expresion "<<(num1==num2?true:false)<<endl;
    cout<<"Comman operator syntax a,b,c,.... "<<endl;
    cout<<"Dot and arrow operator syntax . and -> "<<endl;
    cout<<"Casting operator syntax datatype()" <<float(num1)<<endl;
    cout<<"& Address operator syntax &a "<<(&num1)<<endl;
    cout<<"*Pointer operator syntax *a "<<endl;

    // Unary operators
    cout<<"Unary operators"<<endl<<endl;

    cout<<"+ Unary Plus "<<endl;
    cout<<"- Unary Minus "<<endl;
    cout<<"++ Increment operator "<<endl;
    cout<<"-- Decrement operator "<<endl;
    cout<<"! Logical complement operator "<<endl;

    // Post and Pre Increment and Decrement opertaor
    cout<<"Post and Pre Increment and Decrement opertaor"<<endl<<endl;
    cout<<"Post is a++ and Pre is ++a Increment "<<endl;
    cout<<"Post is a-- and Pre is --a Decrement "<<endl;

    // Operators Precedence and Associativity

    return 0;
}