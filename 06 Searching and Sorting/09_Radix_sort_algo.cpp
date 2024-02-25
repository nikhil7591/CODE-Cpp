#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

void countSort(vector<int> &v,int n,int pos){

    // create frequency array
    vector<int> freq(10,0);
    for(int i=0;i<n;i++){
        freq[(v[i]/pos)%10]++;
    }
     
    // calculate cumlative freq
    for(int i=1;i<10;i++){
        freq[i]+=freq[i-1];
    }

    // calculate the sorted array
    vector<int> ans(n);
    for(int i = n-1;i>=0;i--){
       ans[--freq[(v[i]/pos)%10]] = v[i];
    }

    // copy back the ans to orginal array
    for(int i=0;i<n;i++){
        v[i]=ans[i];
    }
    return;
}

void radixSort(vector<int> &v,int n){
    // max element
    int max_ele = INT8_MIN;
    for(int i=0;i<n;i++){
        max_ele = max(v[i],max_ele);

    }
    //
    for(int pos=1;(max_ele/pos)>0;pos*=10){
        countSort(v,n,pos);
    }
    return;
}

int main(){

    int n;
    cin>>n;
    vector<int> a(n);

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    radixSort(a,n);
    for(int i:a){
        cout<<i<<" ";
    }cout<<endl;


    return 0;
}