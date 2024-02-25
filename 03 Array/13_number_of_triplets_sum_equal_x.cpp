#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector <int> v(9);
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }

    int num;
    cout<<"Enter number those sum find: ";
    cin>>num;
    int countPairs = 0;
    bool flag = true;
    for(int i=0;i<v.size();i++){
        for(int j=i+1;j<v.size();j++){
            for(int k=j+1;k<v.size();k++){
                if((v[i]+v[j]+v[k])==num){
                    cout<<"("<<v[i]<<","<<v[j]<<","<<v[k]<<")"<<endl;
                    countPairs+=1;
                    flag = false;
                }
            }
        }
    }
    if(flag == false){
        cout<<"Number of pair is: "<<countPairs<<endl;
    }
    else{
        cout<<"Number of pair is  not exist"<<endl;
    }

    return 0;
}