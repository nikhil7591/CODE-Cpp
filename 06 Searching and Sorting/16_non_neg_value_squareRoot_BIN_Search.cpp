#include<bits/stdc++.h>
#include<iostream>
using namespace std;
// find the square root of the given non negative value x. Round it off to the nearest
// time: O(logn)
// space: O(1)

int main(){

    int n = 25;
    int lo = 1;
    int hi = 24;
    int ans=0;
    while(lo<=hi){
        int mid = lo+(hi-lo)/2;
        if((mid*mid)==n){
            // cout<<mid<<endl;
            ans=mid;
            break;
        }
        else if((mid*mid)>n){
            hi = mid-1;
        }
        else{
            ans=mid;
            lo=mid+1;
        }

    }
    cout<<ans<<endl;

    
    return 0;
}