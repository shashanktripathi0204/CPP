// Vector Initialisation

#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> v){
    cout<<endl;
    int size = v.size();
    for(int i = 0; i<size; i++){
        cout<<v[i]<<endl;
        // cout<<v.at(i)<<endl; // same thing as v[i]
    }
}

void print2(vector<int> v){
    cout<<endl;
    cout<<"Printing Vector using ForEach :-"<<endl;
    for(auto it:v){
        cout<<it<<endl;
    }
    cout<<endl;
}

int main(){
    // 1 basic
    vector<int> arr;

    // Vector with some default size and value
    vector<int> arr2(5, -1); // this will have a size of 5 and its every value will be -1
    print(arr2);
    // 3rd way
    vector<int> arr3 = {1,2,3,4,5,6};
    print(arr3);
    print2(arr3);

    // 4th way
    vector<int> arr4{1,2,3,4};
    print(arr4);

    // Copy Vector, both arr5 and arr6 are separate
    vector<int> arr5 = {7,7,7,7};
    vector<int> arr6(arr5);
    print(arr6);

    vector<char> v;
    v.push_back('a');
    v.push_back('b');
    v.push_back('c');
    cout<<endl;
    cout<<"Front element: "<<v[0]<<endl;
    cout<<"Front element: "<<v.front()<<endl;
    cout<<"last element: "<<v[v.size() - 1]<<endl;
    cout<<"last element: "<<v.back()<<endl;
}