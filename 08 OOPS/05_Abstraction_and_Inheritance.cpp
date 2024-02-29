#include<bits/stdc++.h>
#include<iostream>
using namespace std;

// // Abstraction:
// // -> enables us to display only essential information while hiding implementation __swappable_details
// // -> eg. pow(x,y)

// // INHERITANCE:
// // -> a class inherits properties of another class
// // -> suppos A(Parent class/Super class)----> B(Child class/ sub class)

// // Access Specifiers & Modes of Inheritance
// //      -> Public ==> Data & function -> they can be access from anywhere
// //      -> Private  ==> Data & function -> they can be accessible is Own class, parent class & derived class
// //      -> Protected ==> Data & function -> they can be accessible only in Own class


// class Parent{
//     public:
//         int x;

//     protected:
//         int y;

//     private:
//         int z;
// };

// class Child1:public Parent{
//     // x will remain public
//     // y will remain protected
//     // z will not be accessible

// };

// class Child2:private Parent{
//     // x will remain private
//     // y will remain private
//     // z will be inaccessible

// };

// class Child3:protected Parent{
//     // x will remain protected
//     // y will remain protected
//     // z will be inaccessible

// };

// // Type of Inheritance:

// // -> Single Inheritance --> 
// // -> example of single:

// class Parent1{
//     public:
//         Parent1(){
//             cout<<"Parent1 class"<<endl;
//         }
// };

// class Child_P1: public Parent1{
//     public:
//         Child_P1(){
//             cout<<"Child_P1 class"<<endl;
//         }
// };


// // -> Multi-level Inheritance --> Parent class is ferived from another class
// // example:

// class GrandChild:public Child_P1{
//     public:
//         GrandChild(){
//             cout<<"GrandChild class"<<endl;
//         }
// };

// // -> Multiple Inheritance --> child 
// // example:

// class Parent1{
//     public:
//         Parent1(){
//             cout<<"Parent1 class"<<endl;
//         }
// };
// class Parent2{
//     public:
//         Parent2(){
//             cout<<"Parent2 class"<<endl;
//         }
// };

// class Child_P1: public Parent1,Parent2{
//     public:
//         Child_P1(){
//             cout<<"Child_P1 class"<<endl;
//         }
// };

// class GrandChild:public Child_P1{
//     public:
//         GrandChild(){
//             cout<<"GrandChild class"<<endl;
//         }
// };

// // --> Hierachical Inheritance --> one parent class and they have multiple child class
// // --> example:
// class Parent1{
//     public:
//         Parent1(){
//             cout<<"Parent1 class"<<endl;
//         }
// };

// class Child_P1: public Parent1{
//     public:
//         Child_P1(){
//             cout<<"Child_P1 class"<<endl;
//         }
// };

// class Child_P2:public Parent1{
//     public:
//         Child_P2(){
//             cout<<"Child_P2 class"<<endl;
//         }
// };

// // --> Hybrid Inheritance ---> combination of >1 inheritance types
// // -> example:


int main(){
    
    // Parent p;
    // p.x;

    // // -> Single Inheritance 
    // Child_P1 c;

    // // -> Multi-level Inheritance
    // GrandChild gc;

    // // Multiple Inheritance
    // Child_P1 c;

    // // Hierachical Inheritance


    // // Hybrid Inheritance


    return 0;
}