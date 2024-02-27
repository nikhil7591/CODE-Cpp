#include<bits/stdc++.h>
#include<iostream>
using namespace std;

// Que:
// Given a binary string and an integer k, return the maximum number of consecutive
// 1's in the string if you can flip at most k 0's.

// time: O(n) --> n is length of binary string/input string
// space: O(1)
int longestOnes(string str,int k){
    int start =0;
    int end = 0;
    int zero_count = 0;
    int max_length = 0;

    for(;end<str.length();end++){
        if(str[end]=='0'){
            zero_count++;
        }
        while(zero_count>k){

            if(str[start]=='0'){
                zero_count--;
            }
            start++; //contracting our window
        }

        // zero_count <= k
        max_length = max(max_length,end-start+1);
    }
    return max_length;
}

int main(){

    // brute force metthod
    // time: o(n^2)
    // first loop i=0 to i<s.length()
        // second loop j=i;j<s.length()
            // { check in range i to j 0's is<=k}

    // second method using "sliding window technique"
    string str;
    cout<<"Enter binary string: ";
    cin>>str; // take binary string from user

    int k;
    cout<<"Enter max flip: ";
    cin>>k;// how many max flip 

    cout<<longestOnes(str,k)<<endl;

    return 0;
}