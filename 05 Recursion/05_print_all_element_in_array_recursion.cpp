#include<iostream>

using namespace std;

void array(int *arr,int index,int size){
    if(size==index){
        return;
    }
    cout<<arr[index]<<endl;
    array(arr,index+1,size);
}

int main(){

    int arr[] = {1,2,9,3,6};
    int size = (sizeof(arr)/sizeof(arr[0]));
    cout<<"size of array "<<size<<endl;
    int index = 0;
    array(arr,index,size);

    return 0;
}