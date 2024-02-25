#include<iostream>
using namespace std;

// QUE. Given a number num and a value k. Print k multiple of num.

void num_Print_K_Time(int num,int k){
    if(k==0){
        return;
    }
    num_Print_K_Time(num,k-1);
    cout<<num*k<<" ";
    
}

int main(){

    int num,k;
    cin>>num>>k;

    num_Print_K_Time(num,k);

    return 0;
}