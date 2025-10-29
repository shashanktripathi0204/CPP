// Prog to shift array element by 1 place right

#include <iostream>
using namespace std;

void shift(int arr[], int size){
    int last = arr[size-1];
    int right = size - 1;

    while(right != 0){
        arr[right] = arr[right - 1];
        right--;
    }
    arr[0] = last;
}

int main(){
    int arr[5] = {10, 20, 30, 40, 50};
    int size = 5;
    shift(arr, size);
    for(int i = 0; i<size; i++){
        cout<<arr[i]<<" ";
    }
} 