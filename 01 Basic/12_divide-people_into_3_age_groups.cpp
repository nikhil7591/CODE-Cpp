#include<iostream>
using namespace std;

int main(){

    int age;
    cout<<"Enter Age: ";
    cin>>age;

    if(age<12){
        cout<<"Child"<<endl;
    }
    else if(age>12 && age<18){
        cout<<"Teenager"<<endl;
    }
    else if(age>60){
        cout<<"Senior citzen"<<endl;
    }
    else {
        cout<<"Adult"<<endl;
    }

    return 0;
}