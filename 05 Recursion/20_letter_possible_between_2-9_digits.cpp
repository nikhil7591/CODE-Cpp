#include<iostream>
#include<vector>

using namespace std;
void possibleLetter(string &str,int i,string result,vector<string> &li,vector<string> &v){
    if(i==str.size()){
        li.push_back(result);
        return;
    }
    int digit = str[i] - '0';
    if(digit<=1){
        possibleLetter(str,i+1,result,li,v);
        return;
    }
    for(int j=0;j<v[digit].size();j++){
        possibleLetter(str,i+1,result+v[digit][j],li,v);
    }
    return;

}

int main(){
    
    vector<string> v(10);
    v = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    string str;
    cout<<"Enter any number those digit should be between 2-9: "<<endl;
    cin>>str;

    vector<string> li;
    possibleLetter(str,0,"",li,v);

    // int c = li.size();
    for(int i =0;i<li.size();i++){
        cout<<li[i]<<" ";
    }
    // cout<<c;

    return 0;
}