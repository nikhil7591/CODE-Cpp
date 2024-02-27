#include<bits/stdc++.h>
#include<iostream>
using namespace std;
// You have two strings s and t check it is a isomorphic or not
// time: O(n)
// space: O(256)
bool isIsomorphic(string s,string t){
    vector<int> v1(128,-1);
    vector<int> v2(128,-1);

    if(s.length()!=t.length()){
        return false;
    }

    for(int i=0;i<s.length();i++){
        if(v1[s[i]]!= v2[t[i]]){ // checking if value of character at index i match in both vectors
            return false;
        }
        v1[s[i]] = i; // storing string position in vectors for characters at idx i
        v2[t[i]] = i;
    }
    return true;
}

int main(){
    
    string s, t;
    cout<<"Enter first string: ";
    cin>>s;
    cout<<"Enter second string: ";
    cin>>t;

    // cout<< anagramString(s,t)<<endl;
    if(isIsomorphic(s,t)){
        cout<<"String are isomorphic "<<endl;
    }
    else{
        cout<<"String are not isomorphic "<<endl;
    }

    return 0;
}