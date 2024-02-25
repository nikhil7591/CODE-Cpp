// #include<iostream>
// #include<vector>
#include<bits/stdc++.h>
using namespace std;

int main(){
    // Rotate the given array 'a'by k steps,where kis non-negative.Note:K can be greate than n as well where n is the size of array 'a'.

    // // this code use extra memory required.

    // int array[]={1,2,3,4,5};
    // int size = 5;
    // int k =2;
    // // k can be greater than size
    // k = k%size;

    // int ansarray[size];
    // int j = 0;

    // // inserting last k element in ans array
    // for(int i=size-k;i<size;i++){
    //     ansarray[j++]=array[i];
    // }

    // // inserting firt n-k elements in ansarray at last
    // for(int i=0;i<=k;i++){
    //     ansarray[j++]=array[i];
    // }

    // for(int i=0;i<size;i++){
    //     cout<<ansarray[i]<<" ";
    // }
    // cout<<endl;

    // // now wirte code without using extra memory means not use extra array

    vector <int> v={1,2,3,4,5};
    int k = 3;
    k=k%v.size();

    reverse(v.begin(),v.end());
    reverse(v.begin(),v.begin()+k);
    reverse(v.begin()+k,v.end());

    for(int a:v){
        cout<<a<<" ";
    }
    cout<<endl;


    return 0;
}