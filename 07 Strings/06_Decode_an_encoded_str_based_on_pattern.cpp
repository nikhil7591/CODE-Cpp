#include<bits/stdc++.h>
#include<iostream>
using namespace std;

// Que:
// An encoded string (s) is given, and the task is to decode it. The encoding pattern is that
// the occurence of the string is given at the starting of the string and each string is 
// enclosed by square brackets.

// Note: The occurnce of a single string is less than 1000.

// space: O(n) --> n is length of decoded string
// time: O(n) --> n is length of decoded string
string decodedString(string str){

    string result = "";

    // traversing the encoded string
    for(int i=0;i<str.length();i++){
        if(str[i]!=']'){
            result.push_back(str[i]);
        }
        else{
            // extract string from result
            string st = "";
            while(!result.empty() && result.back()!='['){
                st.push_back(result.back());
                result.pop_back();
            }

            // reversing the st
            reverse(st.begin(),st.end());

            // remove last char from result which is [
            result.pop_back();

            // extract num from resut
            string num = "";
            while(!result.empty() && (result.back()>='0' && result.back()<='9')){
                num.push_back(result.back());
                result.pop_back();
            }

            // reverse the num string
            reverse(num.begin(),num.end());

            // convert string to integer
            int int_num = stoi(num);

            // inserting str in result int_num times
            while(int_num>0){
                result +=st;
                int_num--;
            }

        }
    }
    return result;
}

int main(){

    string str;
    cin>>str;

    cout<<decodedString(str)<<endl;
    
    return 0;
}