// Missing Elements from an Array, with Duplicates
// [1,3,5,3,4]
// the missing element is 2

#include <iostream>
using namespace std;

void findMissing(int* arr[])

int main(){
    int arr[5] = {1,3,5,3,4};
    int size = 5;
    cout<<"heelo"<<endl; 
    int k = 1;
    for(int i = k;i<=size;i++){
        if(arr[i - 1]<0){
            cout<<i<<endl;
        }
        else{
           k = arr[arr[i-1]]; 
        }
        
        arr[arr[i-1]] = -1*arr[arr[i-1]];
    }

    for(int i = 0; i<size; i++){
        cout<<"heelo"<<endl; 
        cout<<arr[i]<<" ";
    }
}