#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v(6);
    cout<<"Enter elements of array"<<endl;
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }

    bool sortedFlag = true;
    for(int i=1;i<v.size();i++){
        if(v[i]<=v[i-1]){
            sortedFlag = false;
        }
    }
    if(sortedFlag==false){
        cout<<"Your array is not sorted"<<endl;
    }
    else{
        cout<<"Your array is sorted"<<endl;
    }

    return 0;
}