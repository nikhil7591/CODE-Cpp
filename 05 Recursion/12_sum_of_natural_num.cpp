#include<iostream>
using namespace std;

// QUE.Given a number n.Find the sum of natural numbers till n but with alternate signs.

int sumOfFirstNum(int num){  
    if(num==0){
        return 0;
    }
    int a = sumOfFirstNum(num-1);
    if(num%2==0){
        a-=num;
    }
    else{
        a+=num;
    }

    return a;
}



int main(){

    int num;
    cin>>num;

    cout<<sumOfFirstNum(num)<<endl;
    return 0;
}