// Rotate an element by k times - O(N) Space complexity

#include <iostream>
using namespace std;

void rotate(int arr[], int size, int steps){
    steps = steps % size; // the steps can be larger than size of array, is step is 5 then we get the original array after rotating

    for(int i = 0; i<size; i++){
        int rotated_index = (i - steps + size) % size;
        cout<<arr[rotated_index]<< " ";
    }
}

int main(){
    int arr[5] = {1,2,3,4,5};
    int size = 5;
    int steps = 3; // user defined value
    rotate(arr, size, steps);
}