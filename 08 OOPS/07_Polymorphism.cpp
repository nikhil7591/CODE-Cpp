#include<bits/stdc++.h>
#include<iostream>
using namespace std;

// Polymorphism: 
// -> ability of objects / method to take different forms 
// --> Types:
//      -> 1. Complie time Polymorphism
//          --> a. Function overloading ==> define a number of function with some function name they perform difference according to the arguments passed 
//          --> b. Operator Overloading
//      -> 2. Runtime Polymorphism
//            ==> resolved at runtime -> and using functiom overloading--> child clas defines a function of parent class


// Function Overloading example:
// class Sum{
//     public:
//         void add(int x,int y){
//             int sum = x+y;
//             cout<<sum<<endl;
//         }
//         void add(int x,int y,int z){
//             int sum = x+y+z;
//             cout<<sum<<endl;
//         }

//         void add(float x,float y){
//             float sum = x+y;
//             cout<<sum<<endl;
//         }
// };

// // Operator Overloading
// class Complex{
//     public:
//         int real;
//         int img;
//         Complex(int x,int y){
//             real = x;
//             img = y;
//         }
//         Complex operator+ (Complex &c){
//             Complex ans(0,0);
//             ans.real = real +c.real;
//             ans.img = img + c.img;
//             return ans;
//         }
// };

// Runtime Polymorphism (Function Overiding)
class Parent{
    public:
        virtual void print(){
            cout<<"parent class/ print func"<<endl;
        }
        void show(){
            cout<<"parent class/ show func"<<endl;
        }
};
class Child: public Parent{
    public:
        void print(){
                cout<<" child class/ print func"<<endl;
            }
        void show(){
            cout<<"child class/ show func"<<endl;
        }
};

int main(){
    // // Function Overloading
    // Sum s;
    // s.add(2,3);
    // s.add(2,3,4);
    // s.add(float (2.5),float(6.4));

    // // Operator Overloading
    // Complex c1(1, 2);
    // Complex c2(1, 3);
    // Complex c3=c1+c2;
    // cout<<c3.real<<" i"<<c3.img<<endl;

    // Runtime Polymorphism
    Parent *p;
    Child c;

    p = &c;
    p->print();
    p->show();
    return 0;
}