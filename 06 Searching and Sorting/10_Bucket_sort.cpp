// #include<bits/stdc++.h>
// #include<iostream>
// #include<vector>
// #include<math.h>

// using namespace std;

// void bucketSort(vector<float> &v){

//     int n = v.size();
    
//     vector<vector<float>> bucket(n,vector<float> ());
    
//     // step1

//     //step2: inserting elements into bucket
//     for(int i=0;i<n;i++){
//         int index = v[i]*n;
//         bucket[index].push_back(v[i]);
//     }

//     //step3: sorting individual buckets
//     for(int i=0;i<n;i++){
//         if(!bucket[i].empty()){
//             sort(bucket[i].begin(),bucket[i].end());
//         }
//     }

//     //steps: combining elements from buckets
//     int k = 0;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<bucket[i].size();j++){
//             v[k++] = bucket[i][j];
//         }
//     }
//     return;
// }

// int main(){

//     int n;
//     cin>>n;

//     vector<float> v(n);
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//     }

//     bucketSort(v);

//     for(int i=0;i<n;i++){
//         cout<<v[i]<<" ";
//     }cout<<endl;

//     return 0;
// }

// second method ki jab bucket sort main aalg element ho
#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<math.h>

using namespace std;

void bucketSort(vector<float> &v){

    int n = v.size();
    
    vector<vector<float>> bucket(n,vector<float> ());
    
    // step1
    float max_ele = v[0];
    float min_ele = v[0];
    for(int i =1;i<n;i++){
        max_ele = max(max_ele,v[i]);
        min_ele = min(min_ele,v[i]);
    }

    float range = (max_ele-min_ele)/n;


    //step2: inserting elements into bucket
    for(int i=0;i<n;i++){
        // boundary elements
        int index = (v[i]-min_ele)/range;
        float diff = (v[i]-min_ele)/range-index;
        if(diff==0 &&v[i]!=min_ele){
            bucket[index-1].push_back(v[i]);

        }
        bucket[index].push_back(v[i]);
    }

    //step3: sorting individual buckets
    for(int i=0;i<n;i++){
        if(!bucket[i].empty()){
            sort(bucket[i].begin(),bucket[i].end());
        }
    }

    //steps: combining elements from buckets
    int k = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<bucket[i].size();j++){
            v[k++] = bucket[i][j];
        }
    }
    return;
}

int main(){

    int n;
    cin>>n;

    vector<float> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    bucketSort(v);

    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }cout<<endl;

    return 0;
}