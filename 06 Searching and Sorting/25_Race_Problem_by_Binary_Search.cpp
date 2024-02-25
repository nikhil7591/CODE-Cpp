#include<bits/stdc++.h>
#include<iostream>
using namespace std;
// Que:
// A new racing track for kids is being built in New York with 'n' starting spots. The spots are 
// located along a straight line at positions x1, x2... xn(xi <=10^9). For each 'i', xi+1 > xi. 
// At a time only 'm' children are allowed to enter the race. Since the race track is for kids, they 
// may run into each other while running. To prevent this, we want to choose the starting spots 
// such that the minimum distance between any two of them is as large as possible. What is the largest minimum distance

// The first line of input will contain the value of n, the number of starting spots. 
// The second line of input will contain the n numbers denoting the location of each spot.
//  The third line will contain the value of m, number of children

// time : O(nlog(xn-x1))
// space : O(1)

bool canPlaceStudents(vector<int> &pos, int s , int mid){
    int studentsRequride = 1;
    int lastPlaced = pos[0];
    for (int i =1; i<pos.size();i++){
        if(pos[i]-lastPlaced >=mid){
            studentsRequride++;
            lastPlaced = pos[i];
            if(studentsRequride == s){
                return true;
            }
        }
    }
    return false;
}

int race(vector<int> &pos,int s){
    int n = pos.size();
    int lo = 1;
    int hi = pos[n-1]-pos[0];

    int ans = -1;
    while(lo<=hi){
        int mid = lo +(hi-lo)/2;
        if(canPlaceStudents(pos,s,mid)){
            ans = mid;
            lo = mid+1;
        }
        else{
            hi = mid-1;
        }
    }
    return ans;
}

int main(){

    int n;
    cout<<"Enter number of position: ";
    cin>>n; // number of position

    vector<int> pos;
    for(int i = 0;i<n;i++){
        int x;
        cin>>x; // distance b/w two students
        pos.push_back(x);
    }

    int s;
    cin>>s;// number students
    cout<<race(pos,s)<<endl;
    
    return 0;
}