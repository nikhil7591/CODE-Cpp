#include<iostream>
#include<vector>
using namespace std;

int main(){
    
    vector<int> v;
    for(int i=0;i<5;i++){
        int element;
        cin>>element;
        v.push_back(element);
    }

    // for loop
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    // erase
    v.erase(v.end()-2);

    // for each loop
    for(int element:v){
        cout<<element<<" ";
    }
    cout<<endl;

    // while loop
    int i = 0;
    // insert
    v.insert(v.begin()+2,9);
    while(i<v.size()){
        cout<<v[i]<<" ";
        i++;
    }


    return 0;
}