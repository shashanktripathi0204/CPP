// Prog to sort 0 and 1

#include <iostream>
using namespace std;

// normal approach
void sort_1_0(int arr[], int size){
    for(int i = 0; i<size; i++){
        for(int j = 0; j<size; j++){
            if(arr[i]<arr[j]){
                int k = arr[i];
                arr[i] = arr[j];
                arr[j] = k;
            }
        }
    }
}

// 2 pointer approach
void pointer_2_sort_1_0(int arr[], int size){
    int left = 0; int right = size - 1;
    while(left<right){
        if(arr[left] > arr[right]){
            int k = arr[left];
            arr[left] = arr[right];
            arr[right] = k;
            left++;
            right--;
        }
        else if((arr[left] == arr[right]) && arr[left] == 1) right--;
        else if((arr[left] == arr[right]) && arr[left] == 0) left++;
        else {
            left++;
            right--;
        }
    }
}

// 2 poiter approach
void sort_0_1(int arr[], int size) {
    int left = 0, right = size - 1;

    while (left < right) {
        // Move left pointer if element is already 0
        while (arr[left] == 0 && left < right)
            left++;

        // Move right pointer if element is already 1
        while (arr[right] == 1 && left < right)
            right--;

        // Swap if left is 1 and right is 0
        if (left < right) {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
}

int main(){
    int arr[10] = {0,0,1,1,0,1,0,0,1,0};
    int size = 10;
    // sort_1_0(arr, size);
    pointer_2_sort_1_0(arr, size);
    for(int i = 0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}