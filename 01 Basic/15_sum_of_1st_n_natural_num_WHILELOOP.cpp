#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;

    int i =0;
    int sum;
    sum = 0;
    while (i<n)
    {
        sum+=i+1;
        i++;
    }
    cout<<sum<<endl;
}