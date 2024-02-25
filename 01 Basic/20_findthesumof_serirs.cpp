#include<iostream>
using namespace std;

int main(){

    int num;
    cin>>num;

    int sum = 0;
    for(int i=1;i<=num;i++){
        if(i%2!=0){
            sum+=i;
        }
        else{
            sum=sum+(-i);
        }
    }
    cout<<sum<<endl;
    return 0;
}