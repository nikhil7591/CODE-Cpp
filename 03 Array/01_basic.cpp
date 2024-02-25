#include<iostream>
using namespace std;

int main(){

    // //  how to find length and size of aray
    // int array[]={1,2,3,4};
    // cout<<sizeof(array)<<endl;//size of array
    // cout<<sizeof(array)/sizeof(array[0])<<endl;//length of array

    // int aray2[4];//this array not initlize then they give garbadge value
    // cout<<aray2[0]<<endl;
    // cout<<aray2[1]<<endl;
    // cout<<aray2[2]<<endl;
    // cout<<aray2[3]<<endl;

    // // tervasing the array
    // // for loop
    // int array[]={1,2,3,4,5};
    // int lengthOfArray = sizeof(array)/sizeof(array[0]);

    // for(int i=0;i<lengthOfArray;i++){
    //     cout<<array[i]<<endl;
    // }

    // // for each loop
    // // syntax of forEachLoop is for(datatype var_name: array){}
    // int array[]={1,2,3,4,5};
    // for(int element:array){
    //     cout<<element<<endl;
    // }

    // // while loop
    // int array[]={1,2,3,4,5};
    // int index = 0;
    // int size = sizeof(array)/sizeof(array[0]);
    // while(index<size){
    //     cout<<array[index]<<endl;
    //     index++;
    // }

    // // how to get input in array
    // // by for loop
    char vowel[5];
    // for(int i = 0;i<5;i++){
    //     cout<<"Enter element "<<i+1<<" ";
    //     cin>>vowel[i];
    // }
    // cout<<vowel<<endl;

    // // by for each
    for(char &ele:vowel){
        cin>>ele;
    }
    cout<<vowel;
    

    return 0;
}