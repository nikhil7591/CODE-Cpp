#include<iostream>
#include<vector>
using namespace std;

int main(){
    // vector is dynamic arrays -> resize when insert/delete elements
    // contiguous memory allocation
    // 1. declaration 
    // #include<vector>
    //      vector<datatype> vector-name(size);
    // 2. size
    //      v.size()
    // 3. resize
    //      v.resize()
    // 4. capacity
    //      v.capacity()
    //      capacity >= size
    // 5. Add elements
    //      v.pushback(element) add in last index of array
    //      v.insert(position,element)-> you can give position of element
    //      v.begin()-> find first element positiion
    //      v.end()-> find last element position
    // 6.delete element
    //      v.pop-back()-> delete last element of array
    //      v.erase(position)-> relative to start/end position element
    //      v.clear()-> to delete all element invector
    vector<int> v;

    cout<<"size: "<<v.size()<<endl;
    cout<<"capacity: "<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"size: "<<v.size()<<endl;
    cout<<"capacity: "<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"size: "<<v.size()<<endl;
    cout<<"capacity: "<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"size: "<<v.size()<<endl;
    cout<<"capacity: "<<v.capacity()<<endl;

    v.resize(5);
    cout<<"size: "<<v.size()<<endl;
    cout<<"capacity: "<<v.capacity()<<endl;

    v.pop_back();
    v.pop_back();

    return 0;
}