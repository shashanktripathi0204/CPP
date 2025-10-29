// Prog of Dynamic Array initialisation

#include <iostream>
using namespace std;

void fun(int arr[], int n){
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<endl;
    }
}

int main(){
    // Static memory allocation of array
    // int n = 3;
    // int arr[3] = {1,2,3};

    // Dynamic Memory allocation
    int n;
    cout<<"Enter the number of elements n = ";
    cin>>n;
    int *arr = new int[n]; // each element would be 0 or garbage

    // Taking n elemenst as  input and inserting in array
    for(int i = 0; i<n; i++){
        int data;
        cout<<"Enter the value at index "<<i<<" = ";
        cin>>data;
        cout<<endl;
        arr[i] = data;
    }
    fun(arr, n);
}