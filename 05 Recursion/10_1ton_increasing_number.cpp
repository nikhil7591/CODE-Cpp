#include<iostream>
using namespace std;

// QUE. given a number n. Find the increasing sequence from 1 to n without using any loop.
void print_N_natural_number(int num){
    if(num<1){
        return;
    }
    print_N_natural_number(num-1);
    cout<<num<<" ";
 
}   

int main(){
    
    int num;
    cin>>num;
    print_N_natural_number(num);

    return 0;
}