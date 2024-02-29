#include<bits/stdc++.h>
#include<iostream>
using namespace std;

// Destructor:
// -> function is called when object is deleted
// -> canot pass any parameters
// -> name ==> ~(class_name)

class rectangle{
    public:
        int l; // length
        int b; // breath

        rectangle(){ // default constructor -> no arguments passed

            l = 0;
            b = 0;
        }

        rectangle(int x,int y){ // parameterised constructor -> they have some agruments passed

            l = x;
            b = y;
        }

        rectangle(rectangle &r){ // copy constructor -> initialise an object by another exist object
            l = r.l;
            b = r.b;

        }

        ~rectangle(){ // destructor
            cout<<"Destructor is called"<<endl;
        }
};

int main(){
    
    // rectangle r1;
    // cout<<r1.l<<" "<<r1.b<<endl;

    rectangle *r1 = new rectangle();
    cout<<r1->l<<" "<<r1->b<<endl;
    delete r1;

    rectangle r2(3,5);
    cout<<r2.l<<" "<<r2.b<<endl;

    rectangle r3 = r2;
    cout<<r3.l<<" "<<r3.b<<endl;
    
    return 0;
}