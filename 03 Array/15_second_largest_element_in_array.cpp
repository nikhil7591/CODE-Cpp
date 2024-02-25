#include<iostream>
#include<vector>
using namespace std;
// in below function use when i suppose array is unique
// int largestElementIndex(int array[],int size){
//     int max = INT32_MIN;
//     int maxindex=-1;
//     for(int i=0;i<size;i++){
//         if(array[i]>max){
//             max=array[i];
//             maxindex=i;
//         }
//     }
//     return maxindex;
// }

// direct solution
int secondlargestelement(int array[],int size){
    int max = INT32_MIN;
    int second_max = INT32_MIN;

    for(int i=0;i<size;i++){
        if(array[i]>max){
            max=array[i];
        }
    }

    for(int i=0;i<size;i++){
        if(array[i]>second_max && array[i]!=max){
            second_max = array[i];
        }
    }
    return second_max;

}

int main(){
    int array[]={2,3,5,7,6,1,6,7};
    int n = 8;

    // for largestelement function in above
    // int indexoflargest = largestElementIndex(array,n);
    // int largestelement = array[indexoflargest];
    // for(int i=0;i<n;i++){
    //     if(array[i]==largestelement){
    //         array[i]=-1;
    //     }
    // }
    // int indexofsecondlargest = largestElementIndex(array,n);

    // cout<<array[indexofsecondlargest]<<endl;

    // for secondlargestelement function
    cout<<secondlargestelement(array,n)<<endl;

    return 0;
}