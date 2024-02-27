#include<bits/stdc++.h>
#include<string>
#include<iostream>
using namespace std;

// Que:
// Given a string str, sort the given string.
// Constraints: The string will contian only alphabetical characters from a-z.

// time: O(n)
// space: O(26)
string coutSort(string st){

    // frequency aray
    vector<int> freq(26,0);
    // storing frequency of every character in string
    for(int i=0;i<st.length();i++){
        int index = st[i]-'a';
        freq[index]++;
    }

    // create our sorted string
    int j = 0;
    for(int i=0;i<26;i++){
        while(freq[i]--){
            st[j++] = i+'a';
        }
    }
    return st;
}

// dry run
// bcdaafedd
// a-2 b-1 c-1 d-3 e-1 f-1
// 0   1    2   3   4   5
// 2 1   1  3 1 1
// 

int main(){
    
    string st;
    cin>>st;

    cout<<coutSort(st)<<endl;    
    
    return 0;
}