#include<iostream>
using namespace std;

int main(){

    int num;
    cin>>num;
    for(int i=1;i<=num;i++){
        int fact = i*i;
        cout<<i<<"! "<<fact<<" ;";
    }

    return 0;
}