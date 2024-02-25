#include<iostream>
using namespace std;

int main(){
    int score;
    cin>>score;

    if (score>80){
        printf("Well Done\n");
    }
    else if(score>50 && score<80){
        printf("Can improve\n");
    }
    else{
        printf("Poor performance\n");
    }
    return 0;
}
