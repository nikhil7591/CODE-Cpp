#include<iostream>
using namespace std;
bool palidromeOrNot(int num,int *temp){

    if(num>=0 and num<=9){
        int last = (*temp)%10;
        (*temp)/=10;
        return (num == last);
    }

    bool result = palidromeOrNot(num/10,temp) and (num%10) == ((*temp)%10);
    (*temp)/=10;
    return result;
}

int main(){

    int num = 124;
    int temp = num;
    int *temp1 = &temp;
    cout<<palidromeOrNot(num,&temp)<<endl;


    return 0;
}