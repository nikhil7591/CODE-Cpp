#include<iostream>
using namespace std;

// QUE. find the GCD
int gcd(int a,int b){
    // if(b>a) return gcd(b,a); 
    if(b==0) return a;
    return gcd(b,a%b);   

}

int main(){

    int x,y;
    cin>>x,y;
    cout<<gcd(x,y)<<endl;

    return 0;
}