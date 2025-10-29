// Prog of vector basics

// Vecotr is genrally passed as value, unless we use &

#include <iostream>
#include <vector>

using namespace std;

void print(vector<int> v){
    int size = v.size();
    for(int i = 0; i<size; i++){
        cout<<v[i]<<endl;
        // cout<<v.at(i)<<endl; // same thing as v[i]
    }
}

void capacity_size(){
    vector<int> v;
    int i = 5;
    while(i){
        int d;
        cin>>d;
        v.push_back(d);
        cout<<"Capacity: "<<v.capacity()<<" Size: "<<v.size()<<endl;
        i--;
    }
    print(v);
}

void popBack(vector<int> v){
    v.pop_back();
    v.pop_back();
}

void popBackReference(vector<int> &v){
    v.pop_back();
    v.pop_back();
}

int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    print(v);
    cout<<"----------"<<endl;
    popBack(v);
    print(v);
    cout<<"----------"<<endl;
    popBackReference(v);
    print(v);
    // cout<<"Check Size and Capacity"<<endl;
    // capacity_size();
}