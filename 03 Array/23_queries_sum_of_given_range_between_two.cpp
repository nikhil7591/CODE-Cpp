#include<iostream>
#include<vector>
using namespace std;
// 4 3 9 1 7 2
// l = 2
// r = 5
// prefixsum[r] = 24
// prefixsum[l-1] = 4
// ans = prefixsum[r]-prefix[l-1]
// ans = 20

int main(){

    int n;
    cin>>n;

    vector<int> v(n);
    for(int i=1;i<=n;i++){
        cin>>v[i];
    }

    //calculate perfix sum array
    for(int i=1;i<=n;i++){
        v[i]+=v[i-1];
    }

    int q;
    cout<<"Number queries:  ";
    cin>>q;

    while(q--){
        int l,r;
        cin>>l>>r;

        int ans = 0;
        //ans = prefixsumarray[r]-preixsumofarray[l-1]
        ans = v[r]-v[l-1];
        cout<<ans<<endl;

    }
    return 0;
}