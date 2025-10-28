// Array indexing

#include <iostream>
using namespace std;

int main(){
    int arr[5] = {1,6,2,6,5};

    for(int i = 0; i<5; i++){
        cout<< "value:-"<< arr[i] <<endl;
    }


    // taking user input real time, over writing the arr values
    for(int i = 0; i<5; i++){
        cout<<"The value for index :- "<<i<<endl;
        cin>>arr[i];
        cout<<endl;
    }

    for(int i = 0; i<5; i++){
        cout<< "value:-"<< arr[i] <<endl;
    }
}