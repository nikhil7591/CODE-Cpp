#include<bits/stdc++.h>
#include<iostream>
using namespace std;

// Que:
// You have 'n'(n <= 10^5) boxes of chocolate. Each box contains a[i] (a[i] <= 10000) chocolates. You need to distribute these boxes among 'm' students such that the maximum number of chocolates allocated to a student is minimum.
// a. One box will be allocated to exactly one student.
// b. All the boxes should be allocated.
// c. Each student has to be allocated at least one box. .
// d. Allotment should be in contiguous order, for instance, a student cannot be allocated box 1 and box 3, skipping box 2.

// Calculate and return that minimum possible number. Assume that it is always possible to distribute the chocolates.
// The first line of input will contain the value of n, the number of boxes. The second line of input will contain the n numbers denoting
// The third line will contain the m, number of students. the number of chocolates in each box.

//time: O(nlogn)
// space: O(1)
bool canDistChoco(vector<int> &arr,int mid,int s){
    int n= arr.size();
    int studentsRequired = 1; //atleast one student is present
    int currentSum = 0;
    for(int i=0;i<n;i++){
        if(arr[i]>mid){
            return false;
        }
        if((currentSum + arr[i]) > mid){
            studentsRequired++;
            currentSum = arr[i];
            if(studentsRequired > s){
                return false;
            }
        }
        else{
            currentSum += arr[i];
        }
    }

    return true;
}

int distChocolate(vector<int> &arr,int s){
    int n = arr.size();
    sort(arr.begin(),arr.end());
    int lo = arr[0];
    int hi = 0;
    for(int i = 0;i<arr.size();i++){
        hi+=arr[i];
    }
    int ans = -1;
    while(lo<=hi){
        int mid = lo +(hi-lo)/2;
        if(canDistChoco(arr,mid,s)){
            ans = mid;
            hi = mid-1;
        }
        else{
            lo = mid+1;
        }
    }
    return ans;
}

int main(){

    int n;
    cout<<"Enter number o boxes:";
    cin>>n; // number of boxes

    vector<int> arr;
    for(int i=0;i<n;i++){
        int x;
        cin>>x; // how many chocolate in boxes
        arr.push_back(x);
    }
    
    int s;
    cout<<"Number of student: ";
    cin>>s; // number of student

    cout<<distChocolate(arr,s)<<endl;
    return 0;
}