#include<bits/stdc++.h>
#include<iostream>
using namespace std;

//Que:
// Given an array of strings.Write a programto findthe longest comman perfix string amongst an array of strings.

// time:O(nlogn*n)+ [O(min(s[0].size(),s[n-1].size()))]in square bracket you can be ignore/ n--> is legth of string
// sapce: o(1)

// // by using sort method
// string longestCommonPrefix(vector<string> &arr){
//     // sorting the array of string
//     sort(arr.begin(),arr.end());

//     string s1 = arr[0]; // first string
//     int i=0;
//     string s2 = arr[arr.size()-1]; // second string
//     int j=0;

//     string ans = "";
//     while(i<s1.size() && j<s2.size()){
//         if(s1[i]==s2[j]){
//             ans+=s1[i];
//             i++;
//             j++;
//         }
//         else{
//             break;
//         }
//     }
//     return ans;
// }

// not use sort method
// time: O(n-1*m) / O(n*m) --> n is no. of string and m is length of string
// space: 0(1) 

string longestCommonPrefix1(vector<string> &arr){
    // keeping first string as constant and comparing it with other string
    string s1 = arr[0];
    int ans_length = s1.size();
    for(int i=1;i<arr.size();i++){
        int j = 0;
        while(j<s1.size() && j<arr[i].size() && s1[j]==arr[i][j]){ // finding the common prefix string length
            j++;
        }
        ans_length = min(ans_length,j); // updating length of ans string;
    }

    string ans = s1.substr(0,ans_length);
    return ans;
}

int main(){

    int n;
    cin>>n;
    vector<string> arr(n);
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    // cout<<"Longest common prefix: "<<longestCommonPrefix(arr)<<endl;
    cout<<"Longest common prefix: "<<longestCommonPrefix1(arr)<<endl;
    return 0;
}