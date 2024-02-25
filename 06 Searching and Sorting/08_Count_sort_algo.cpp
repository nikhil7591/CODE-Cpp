#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

void countSort(vector<int> &v){

    int n =v.size(); 

    vector<int> ans(n);

    // finding max element
    int max_ele = INT8_MIN;
    for(int i=0;i<n;i++){
        max_ele = max(v[i],max_ele);

    }

    // create frequency array
    vector<int> freq(max_ele+1,0);
    for(int i=0;i<n;i++){
        freq[v[i]]++;
    }
     
    // calculate cumlative freq
    for(int i=1;i<=max_ele;i++){
        freq[i]+=freq[i-1];
    }

    // calculate the sorted array
    for(int i = n-1;i>=0;i--){
       ans[--freq[v[i]]] = v[i];
    }

    // copy back the ans to orginal array
    for(int i=0;i<n;i++){
        v[i]=ans[i];
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

    countSort(a);
    for(int i:a){
        cout<<i<<" ";
    }cout<<endl;


    return 0;
}