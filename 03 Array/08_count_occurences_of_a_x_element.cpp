#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v(6);
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }

    cout<<"Enter x: ";
    int x;
    cin>>x;

    int countOccurences =0;
    // by using for loop
    for(int i=0;i<v.size();i++){
        if(v[i]==x){
            // countOccurences+=1;
        }
    }
    // by using for each loop
    for(int ele:v){
        if(ele==x){
            countOccurences+=1;
        }
    }

    cout<<"Your number of Occurence is: "<<countOccurences<<endl;

    return 0;
}