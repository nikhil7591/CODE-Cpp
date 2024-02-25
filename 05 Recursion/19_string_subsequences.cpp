#include<iostream>
#include<vector>
using namespace std;

void subsequencesOfString(string &s,int i,string result, vector<string> &li){

    if(i==s.length()){
        li.push_back(result);
        return;
    }

    subsequencesOfString(s,i+1,result+s[i],li);
    subsequencesOfString(s,i+1,result,li);

}

int main(){

    string s;
    cin>>s;
    int i = 0;
    string result = "";
    vector<string> li;
    subsequencesOfString(s,i,result,li);
    for(int  i=0;i<li.size();i++){
        cout<<li[i]<<" ";
    }

    return 0;
}