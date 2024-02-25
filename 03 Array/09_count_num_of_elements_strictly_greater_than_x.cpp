#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> v(6);
    cout<<"Enter elements of array"<<endl;
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }

    cout<<"Enter x: ";
    int x;
    cin>>x;

    int strictlyGreater = 0;
    // by using for each loop
    for(int ele:v){
        if(ele>x){
            strictlyGreater +=1;
        }
    }

    cout<<"Your number strictly Greater than x is: "<<strictlyGreater<<endl;

    return 0;
}