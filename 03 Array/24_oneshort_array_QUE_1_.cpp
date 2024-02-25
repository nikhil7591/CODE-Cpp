#include<iostream>
#include<vector>
using namespace std;


int main(){

    // QUE 1: Given two vectors arr1[] and arr2[] of size m and n sorted in increasing oreder.merge the two arrays into a single sorted of size m+n.
   
    // first array v1 lengthgivenby user
    int m;
    cout<<"Enter length of first array: ";
    cin>>m;
    // first vector array
    vector<int> v1;
    for(int i=0;i<m;i++){
        int ele;
        cin>>ele;
        v1.push_back(ele);
    }

    // second array v2 legth givenby user
    int n;
    cout<<"Enter length of second array: ";
    cin>>n;
    // second vector array
    vector<int> v2(n);
    for(int i=0;i<n;i++){
        cin>>v2[i];
    }

    // main array

    vector<int> result(m+n);
    int i=0;//will help us to iterate on v1
    int j=0;//will help us to iterate on v2
    int k=0;//will help us to iterate on result
    while(i<m and j<n){
        // both i and j should be within the limits or v1 and v2
        if(v1[i]<v2[j]){
            result[k]=v1[i];
            k++;
            i++;
        }
        else{
            result[k]=v2[j];
            k++;
            j++;
        }
    }
    while(i<m){
        result[k]=v1[i];
        i++;
        k++;
    }
    while(j<n){
        result[k]=v2[j];
        j++;
        k++;
    }
    for(int i=0;i<(m+n);i++){
        cout<<result[i]<<" ";
    }cout<<endl;

    return 0;
}