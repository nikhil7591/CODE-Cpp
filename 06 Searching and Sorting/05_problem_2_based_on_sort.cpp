// #include<iostream>
#include<bits/stdc++.h>
using namespace std;

void selectionSort(char fruit[][60],int n){
    for(int i=0;i<n-1;i++){
        // finding min element
        int min_idx = i;
        for(int j=i+1;j<n;j++){
            if(strcmp(fruit[min_idx],fruit[j])>0){
                min_idx=j;
            }
        }

        // place the min element at the beginning
        if(i!=min_idx){
            swap(fruit[i],fruit[min_idx]);
        }
    }
}

int main(){
    //Que: Given an array of names of the fruits; you are supposed to sort it in lexicographical order using the selection sort.
    char fruit[][60]= {"papaya","lime","watermelon","apple","mango","kiwi"};
    int n = sizeof(fruit)/sizeof(fruit[0]);

    selectionSort(fruit,n);

    for(int i=0;i<n;i++){
        cout<<fruit[i]<<" ";
    }cout<<endl;

    return 0;
}