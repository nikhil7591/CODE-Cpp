#include<iostream>
using namespace std;

int main(){
    // // linear search
    int array[] = {1,4,7,9,2,0};
    int key = 70;
    int ans = -1;
    int size = sizeof(array)/sizeof(array[0]);

    for(int i= 0;i<size;i++){
        if (array[i]==key){
            ans = i;
            break;
        }
    }
    cout<<ans<<endl;
    return 0;
}