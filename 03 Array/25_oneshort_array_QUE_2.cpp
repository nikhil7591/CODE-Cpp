#include<iostream>
#include<vector>
using namespace std;

void pairOfSum(vector<int> &v,int x){
    int i = 0;
    int j= v.size()-1;
    while(i<j){
        if(v[i]+v[j]==x){
            cout<<"Yes"<<endl;
            return ;
            break;
        }
        else if(v[i]+v[j]>x){
            j--;
        }
        else{
            i++;
        }
    }
    cout<<"No"<<endl;
    return ;
}

int main(){

    // Given a vector arr[] sorted in increasing order of n size and an inteager x,find if there exists a pair in the array whose sum is exactly x.
    int n;
    cin>>n;

    vector<int> v;
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    int x;
    cin>>x;

    pairOfSum(v,x);
    // brute force method
    // bool flag = true;
    // for(int i=0;i<v.size();i++){
    //     for(int j=i+1;j<v.size();j++){
    //         if((v[i]+v[j])==x){
    //             flag = false;
    //         }
            
    //     }
    // }
    // if(flag==false){
    //     cout<<"Yes"<<endl;
    // }
    // else{
    //     cout<<"No"<<endl;
    // }

    return 0;
}