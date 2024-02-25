#include<iostream>
#include<math.h>
using namespace std;

// print square of first 5 natural number.
int square(int n){
    return n*n;
}

// write a function to find area and circumference of the circle radius is given by user.
double area(int r){
    return M_PI*square(r);
}
double circumference(int r){
    return 2*M_PI*r;

}
// Given the age of a person, write a function to check of the person is eligible to vote or not.
string checkeligible(int age,int limit){
    if(age>=limit){
        return "Eligible";
    }
    else{
        return "Not Eligible";
    }
}
// check odd number between two number
bool isodd(int i){
    if(i%2!=0){
        return true;
    }
    else{
        return false;
    }
}

// find prime number between two number
bool isprime(int num){
    for(int i=2;i<=(num-1);i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
}
// optimize code for prime number
bool isprimeOptimize(int num){
    for(int i=2;i*i<=num;i++){
        // i^2 <= num -> i <= sqrt(num)
        if(num%i==0){
            return false;
        }
    }
    return true;
} 


int main(){

    // // find firat 5 natural number square
    // for(int i=1;i<=5;i++){
    //     cout<<square(i)<<" ";// call square function for n time 
    // }
    // cout<<endl;

    // // find area and circumference

    // int radius;
    // cout<<"Enter radius: ";
    // cin>>radius;
    // cout<<"Area of Circle: "<<area(radius)<<endl;// call area function
    // cout<<"Circumference of Circle: "<<circumference(radius)<<endl;// call circumference function

    // // vote eligible
    // int age;
    // cout<<"Enter your age: ";
    // cin>>age;
    // int limit;
    // cout<<"Enter limited value: ";
    // cin>>limit;
    // cout<<"Your are: "<<checkeligible(age,limit)<<endl;// call vote function

    // // odd number between two number
    // int start,end;
    // cout<<"Enter start: ";
    // cin>>start;
    // cout<<"Enter ending number: ";
    // cin>>end;
    // for(int i=start;i<=end;i++){
    //     if(isodd(i)){
    //         cout<<i<<" ";
    //     }
    // }

    // // find prime number between two number
    // int start,end;
    // cout<<"Enter start: ";
    // cin>>start;
    // cout<<"Enter ending number: ";
    // cin>>end;
    // for(int i=start;i<=end;i++){
    //     if(isprime(i)){
    //         cout<<i<<" ";
    //     }
    // }
    // cout<<endl;
    // for(int i=start;i<=end;i++){
    //     if(isprimeOptimize(i)){
    //         cout<<i<<" ";
    //     }
    // }


    return 0;
} 