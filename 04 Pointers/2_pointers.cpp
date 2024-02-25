#include<iostream>
using namespace std;

void findFirstLast(string s,char ch,int *first,int*last){
    for (int i =0;i<s.size();i++){
        if(s[i]==ch){
            *first = i;
            break;
        }
    }
    for(int i = s.size()-1;i>0;i--){
        if(s[i]==ch){
            *last = i;
            break;
        }
    }
}
void process(int *arr,int n){
    // inside this function we have the access of the same array in the main
    for(int i=0;i<n;i++){
        cout<<*(arr+i)<<endl;
    }
}

int main(){
    // //call by refernce using pointers

    // // find first and last occurence in string

    // string s = "aaabac";
    // char ch = 'a';
    // int first = -1;
    // int last = -1;
    // findFirstLast(s,ch,&first,&last);

    // cout<<first<<" "<<last<<endl;

    // // pointer arithmetic it is (different from increment and decrement)integers arithmetic
    // int x = 20;
    // int *ptr = &x;
    // cout<<ptr<<" "<<ptr+1<<" "<<ptr+2<<endl;

    // //post and pre arithmetic pointers
    // int arr[2]= {1,2};
    // int *ptr = &arr[0];

    // cout<<ptr<<" "<<*ptr<<endl;
    // // cout<<ptr+1<<" "<<*ptr+1<<endl;
    // // cout<<*ptr++<<endl;
    // // cout<<*ptr++<<endl;

    // cout<<*ptr++<<endl; 

    // cout<<arr[0]<<" "<<arr[1]<<endl;
    // cout<<ptr<<" "<<*ptr<<endl;

    // int arr1[2] = {5,4};

    // int *ptr = &arr1[0];
    // cout<<(*ptr)++<<endl;

    // cout<<arr1[0]<<" "<<arr1[1]<<endl;

    // // array as pointers
    // int arr[3] = {15,12,6};
    // int n = 3;
    // int *ptr = &arr[0];

    // cout<<ptr<<" "<<arr<<" "<<*ptr<<" "<<*arr<<endl;

    // cout<<*(arr+0)<<endl;//they give 0 index value in arr
    // cout<<*(arr+1)<<endl;// they give 1 index value in arr
    // cout<<*(arr+2)<<endl;// they give 2 index value in arr

    // for(int i=0;i<n;i++){
    //     cout<<*(arr+i)<<endl;
    // }

    // // array and pointers 
    // int arr[3]={5,1,2};
    // process(arr,3);

    // // we can use pointer is point an entier array
    int a[3] = {11,12,12};
    int (*p)[3] = &a;
    cout<<p<<" "<<a<<" "<<*p<<" "<<*a<<endl;

    return 0;
}