#include<iostream>
using namespace std;

string removeAllaString(string &s,int idx,int size){
    if(idx == size){
        return "";
    }
    string curr = "";
    curr += s[idx];
    
    return ((s[idx]=='a')? "" : curr) + removeAllaString(s,idx+1,size);
}

int main(){

    // remove all a in string s
    string s = "abcax";
    int idx = 0;
    int size = s.length();
    cout<<removeAllaString(s,idx,size)<<endl;

    return 0;
}