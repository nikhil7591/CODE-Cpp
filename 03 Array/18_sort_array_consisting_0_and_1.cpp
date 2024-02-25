#include<iostream>
#include<vector>
using namespace std;

void sortZeroesAndOnes(vector<int> &v){

    // int Zeroes_count = 0;

    // for(int ele:v){
    //     if(ele==0){
    //         Zeroes_count++;
    //     }
    // }

    // for(int i=0;i<v.size();i++){
    //     if(i<Zeroes_count){
    //         v[i]=0;
    //     }
    //     else{
    //         v[i]=1;
    //     }
    // }

    int left_pts = 0;
    int right_pts = v.size()-1;

    while (left_pts<right_pts){
        if(v[left_pts]==1 && v[right_pts]==0){
            v[left_pts]=0;
            v[right_pts]=1;   
        }

        if(v[left_pts]==0){
            left_pts++;
        }

        if(v[right_pts]==1){
            right_pts--;
        }
    }
}

int main(){

    int n;
    cin>>n;

    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    sortZeroesAndOnes(v);

    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }cout<<endl;

    return 0;
}