#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

int main(){

    // // QUE3: Given a vector arr[] sorted in increasing order of n size and an integer x, find if there exists a pair in the array whose absolute difference is exactly x.

    // length of array
    int n;
    cin>>n; 

    vector<int> v;
    // loop for element of array
    for(int i=0; i<n;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }

    // target value
    int x;
    cout<<"target value: ";
    cin>>x;

    // // Brute force method
    // bool flag = true;
    // for difference
    // for(int i=0;i<n;i++){
    //     for(int j=i+1;j<n;j++){
    //         int a = abs(v[i]-v[j]);
    //         if((a==x)){
    //             flag = false;
    //             break;
    //         }
    //     }
    // }
    // if(flag==false){
    //     cout<<"Yes"<<endl;
    // }
    // else{
    //     cout<<"No"<<endl;
    // }
    
    // // two pointer approch
    bool flag = false;
    int left_ptr = 0;
    int right_ptr = n-1;

    while(left_ptr<right_ptr){
        int a = abs(v[left_ptr]-v[right_ptr]);
        if(a==x){
            flag = true;
            break;
        }
        else if(a>x){
            right_ptr--;
        }
        else{
            left_ptr++;
        }
    }
    if(flag == true){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    return 0;
}