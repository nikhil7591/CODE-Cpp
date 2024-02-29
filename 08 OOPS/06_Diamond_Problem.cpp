#include<bits/stdc++.h>
#include<iostream>
using namespace std;

// Diamond Problem:
// --> base class has multiple parent classes having a common a ancestor class

class Parent1{
    public:
        Parent1(){
            cout<<"Parent1 class"<<endl;
        }
};

class Child_P1: public Parent1{
    public:
        Child_P1(){
            cout<<"Child_P1 class"<<endl;
        }
};

class Child_P2:public Parent1{
    public:
        Child_P2(){
            cout<<"Child_P2 class"<<endl;
        }
};

class GrandChild:public Child_P1,Child_P2{
    public:
    GrandChild(){
        cout<<"GrandChild class"<<endl;
    }
};

int main(){
    
    GrandChild gc;
    
    return 0;
}