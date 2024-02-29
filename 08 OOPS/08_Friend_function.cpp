#include<bits/stdc++.h>
#include<iostream>
using namespace std;

// Friend function
// -> non-member function which can access private member of the class.

class A{
    int x;
    public:
    
    A(int y){
        x = y;
    }
    friend void print(A &obj);
};

void print(A &obj){
    cout<<obj.x<<endl;
}

int main(){

    A obj(5);
    // cout<<obj.x<<endl;
    print(obj);

    return 0;
}