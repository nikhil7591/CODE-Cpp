#include<bits/stdc++.h>
#include<iostream>
using namespace std;

// class class_name{
//     int data1;
//     int data2;
// };

class fruit{
    public:
        string name;
        string color;
};

int main(){
    
    fruit apple; //object
    apple.name = "Apple";
    apple.color = "red";

    cout<<apple.name<<" color "<<apple.color<<endl;

    // another way to declare object
    fruit *mango = new fruit();
    mango->name = "Mango";
    mango->color = "Yellow";
    cout<<mango->name<<" color "<<mango->color<<endl;
    return 0;
}