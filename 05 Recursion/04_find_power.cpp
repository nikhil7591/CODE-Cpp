#include<iostream>
using namespace std;

int powerOfNum(int num,int power){ //time complexity is O(power)
    if(power==0){
        return 1;
    }
    return powerOfNum(num,power-1)*num;

}
// second method how find the power uisng recursion and time complexity is O(log power)

int powerOf(int num,int power){
    if(power == 0){ // base case if power is 0 than we know any number those power is 0 it gives 1
        return 1;
    }
    if(power%2==0){
    // if power is even
       return powerOf(num,power/2)*powerOf(num,power/2); //firstly find power/2 if power is evenand than take a square of fanction
    }
    else{
    // if power is odd
      return num* (powerOf(num,(power-1)/2)*powerOf(num,(power-1)/2)); //firstly find (power-1)/2 if power is odd and take a square of a function than multiple the num
    }
}

int main(){

    // find the power of num using recursion
    int num,power;
    cin>>num;
    cin>>power;

    cout<<powerOfNum(num,power)<<endl;

    // second method optimize solution
    cout<<powerOf(num,power)<<endl;


    return 0;
}