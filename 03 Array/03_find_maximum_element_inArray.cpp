#include<iostream>
using namespace std;

int main(){

    int array[]={1222,2,36,18,9,345};
    int size = sizeof(array)/sizeof(array[0]);
    int maxx = array[0];
    for(int i=0;i<size;i++){
        if(array[i]>maxx){
            maxx = array[i];
        }

    }
    cout<<maxx<<endl;
    return 0;
}