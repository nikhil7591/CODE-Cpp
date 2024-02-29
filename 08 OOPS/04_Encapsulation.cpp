#include<bits/stdc++.h>
#include<iostream>
using namespace std;

// Encapsulation:

// -> binding of metthods & variables together into a single unit -> [class]
// -> how? -> data is only accessible from the class metthods.
// -> also leade to data abstraction & hiding.
//      class -> Abstract data type (ADT)

class ABC{
    int x;
    public:
        void set(int n){
            x = n;
        }

        int get(){
            return x;
        }
};

int main(){
    
    ABC obj1;
    obj1.set(3);
    obj1.get();
    return 0;
}