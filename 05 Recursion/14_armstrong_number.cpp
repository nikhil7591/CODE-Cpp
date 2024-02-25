#include<iostream>
#include<math.h>
using namespace std;

// QUE. Given a number n.Print if it is an armstrong number or not
int power(int a,int p){
    if(p==0){
        return 1;
    }
    if(p%2==0){
        int result = power(a,p/2);
        return result*result;
    }
    else{
        int result = power(a,(p-1)/2);
        return p*result*result;
    }

}

int armstrongOrNot(int num,int p){
    if(num==0){
        return 0;
    }
    int a = num%10;
    int result = pow(a,p)+ armstrongOrNot(num/10,p);
    return result;
}

int main(){

    int num,i,temp,p=0;
    cin>>num;
    i = num;
    while(i>0){
        i/=10;
        p++;
    }
    temp = num;
    int a = armstrongOrNot(num,p);
    if(a == temp){
        cout<< "Yes";
    }
    else{
        cout<<"No";
    }

    return 0;
}