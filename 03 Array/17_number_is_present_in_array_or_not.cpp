// #include<bits/stdc++.h>
#include<iostream>
#include<vector>

using namespace std;
 
int main(){
    // Given Q queries, check if the given number is present in the array or not.
    // Note: Value of the elements in the array is less than 10 to the power 5.
    int n;
    cin>>n;

    vector<int> v(n);
    for(int i=0;i<n;i++){
        cout<<"enter element:";
        cin>>v[i];
    }

    const int N = 1e5+10;
    vector<int> freq(N,0);
    
    for(int i=0;i<n;i++){
        freq[v[i]]++;
    }

    cout<<"Enter queries: ";
    int q;cin>>q;

    while(q--){
        int queryelement;
        cout<<"Enter query element: ";
        cin>>queryelement;
        cout<<"Frequecy in Q is: "<<freq[queryelement]<<endl;
    }

    return 0;
}