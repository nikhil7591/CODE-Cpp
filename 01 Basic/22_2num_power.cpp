#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"Enter number: ";
    cin>>a;
    cout<<"Enter power: ";
    cin>>b;
    int result = 1;
    for(int i=1;i<=b;i++){
        result*=a;
    }
    cout<<result<<endl;
    return 0;
}