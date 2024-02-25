#include<iostream>
using namespace std;

int main(){
    char alphabet;
    cout<<"Enter an alphabet: ";
    cin>>alphabet;

    switch (alphabet)
    {
    case 'a':
        cout<<alphabet<<" is vowel"<<endl;
        break;
    
    case 'e':
        cout<<alphabet<<" is vowel"<<endl;
        break;
    case 'i':
        cout<<alphabet<<" is vowel"<<endl;
        break;
    case 'o':
        cout<<alphabet<<" is vowel"<<endl;
        break;
    case 'u':
        cout<<alphabet<<" is vowel"<<endl;
        break;
    default:
        cout<<alphabet<<" is not vowel"<<endl;
        break;
    }

    return 0;
}