#include<bits/stdc++.h>
#include<iostream>
using namespace std;

// Given two string s and t, return true if t id an anagram of s, and false otherwise.
// Constraints : String s and t will only contain lowercase alphaberical characters.

// // by using sorting  
// string anagramString(string s, string t){
//     // frequency for s string
//     vector<int> freqS(26,0);
//     for(int i=0;i<s.length();i++){
//         int index = s[i]-'a';
//         freqS[index]++;
//     }
//     // frequency for t string
//     vector<int> freqT(26,0);
//     for(int i=0;i<t.length();i++){
//         int index = s[i]-'a';
//         freqT[index]++;
//     }
//     // sort for s string
//     int j = 0;
//     for(int i=0;i<26;i++){
//         while(freqS[i]--){
//             s[j++] = i+'a';
//         }
//     }

//     // sort for t string
//     int k = 0;
//     for(int i=0;i<26;i++){
//         while(freqT[i]--){
//             t[k++] = i+'a';
//         }
//     }
//     cout<<s<<endl;
//     cout<<t<<endl;
//     if(s == t){
//         return "YES";
//     }
//     else{
//         return "NO";
//     }
// }

// second method without sorting
// time: O(length of string)
// space: O(26)/O(1)
bool isAnagram(string s,string t){
    // create frequency array
    vector<int> freq(26,0);
    // if length are differentfor s,t toh return false
    if(s.length()!=t.length()){
        return false;
    }
    // store frequency of characters in s and t
    for(int i=0;i<s.length();i++){
        freq[s[i]-'a']++; // for s, we are incrementing freq of char
        freq[t[i]-'a']--; // for t, we are decrementing freq of char
    }

    // checking if freq of every character is 0
    for(int i=0;i<26;i++){
        if(freq[i]!=0){
            return false; // not anagram
        }
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
    if(isAnagram(s,t)){
        cout<<"String are anagrams "<<endl;
    }
    else{
        cout<<"String are not anagrams "<<endl;
    }
    
    return 0;
}