// Array initialisation

#include <iostream>
using namespace std;

int main(){

    // we can insert as many element as we want, as array size is not metioned
    int arr_unlimited[] = {1,2,3,4,5,6};
    
    int b[5] = {1,2}; // in such case even though the size of arr is 5 and we have only 2 elements in it then the remanining 3 elements will be 0
    cout<<"size of b:-"<< sizeof(b)<<endl;
    for(int i = 0; i<5; i++){
        cout<<b[i]<<endl;
    }

    int arr[10];
    // in this case we will get random values
    for(int i = 0; i<10; i++){
        cout<< "value:-"<< arr[i] <<endl;
    }

    int brr[10] = {2,5,7};
    // in this case after initilization we will get the rest of the elements in the array as 0
    for(int i = 0; i<10; i++){
        cout<< "value:-"<< brr[i] <<endl;
    }
}