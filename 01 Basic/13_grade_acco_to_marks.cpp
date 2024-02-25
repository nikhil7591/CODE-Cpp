#include<iostream>
using namespace std;

int main(){

    int marks;
    cout<<"Enter marks: ";
    cin>>marks;

    if(marks>33){
        if(marks>80){
            cout<<"Well Done!"<<endl;
        }
        else if(marks>50 && marks<=80){
            cout<<"Good!"<<endl;
        }
        else if(marks>=33){
            cout<<"Pass!"<<endl;
        }
    }
    else{
        cout<<"Fail!"<<endl;
    }

    return 0;
}