// shift array by k steps to right and do it in constant space

#include <iostream>
using namespace std;

void reverse_arr(int arr[], int start, int end){
    while(start <= end){
        int k;
        k = arr[start];
        arr[start] = arr[end];
        arr[end] = k;
        start = start + 1;
        end = end - 1;
    }
}

int main() {
    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int n = 8;
    int step = 3; // user defined value to shift the array
  

    reverse_arr(arr, 0, 7);
    reverse_arr(arr, 0, step - 1);
    reverse_arr(arr, step, n - 1);


    // Print the shifted array
    for (int i = 0; i < 8; i++) {
        cout << arr[i] << " ";
    }
    
    return 0;
}
