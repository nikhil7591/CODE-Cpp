#include<iostream>
#include<vector>
using namespace std;

int main(){
    
    vector<int> v(6);
    cout<<"Enter elements of arrays"<<endl;
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }

    int sumOfEven = 0;
    int sumOfOdd = 0;
    for(int ele:v){
        if(ele%2==0){
            sumOfEven +=ele;
        }
        else{
            sumOfOdd+=ele;
        }
    }
    cout<<"Sum of even is: "<<sumOfEven<<endl;
    cout<<"Sum of odd is: "<<sumOfOdd<<endl;
    cout<<"Diff b/w even and odd is: "<<(sumOfEven-sumOfOdd)<<endl;

    return 0;
}