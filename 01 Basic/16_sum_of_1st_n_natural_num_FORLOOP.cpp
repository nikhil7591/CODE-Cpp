#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter: ";
    cin>>n;

    int sum;
    sum=0;
    int i=1;
    for(;i<n+1;i++){
        sum+=i;
    }
    cout<<sum<<endl;

    return 0;
}