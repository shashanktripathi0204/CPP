// Min Number in array
// Reverse an array

#include <iostream>
#include <limits.h>
using namespace std;


int min_number(int arr[], int size){
    int minNum = INT_MAX;
    for(int i = 0; i<size; i++){
        if (arr[i] <= minNum)
            minNum = arr[i];
    }

    return minNum;

}

void reverse_array(int arr[], int size){
    int left = 0; int right = size - 1;
    while(left<=right){
        int k;
        k = arr[left];
        arr[left] = arr[right];
        arr[right] = k;
        left++;
        right--;
    }
}

void extreme_print(int arr[], int size){
    int left = 0; int right = size - 1;
    while(right!=left){
        cout<<arr[left]<<" ";
        cout<<arr[right]<< " ";
        right--;
        left++;
    }
    cout<<arr[left]<<" ";
}

int main(){
    int size = 12;
    int arr[12] = {1,2,4,3,5,6,9,0,8,7,-1,-1};
    cout<<"The Minimum value is :- "<< min_number(arr, size)<<endl;
    
    for(int i = 0; i<size; i++){
        cout<<arr[i]<< " ";
    }
    cout<<endl;
    cout<<"reversed array is :- "<<endl;
    reverse_array(arr, size);
    for(int i = 0; i<size; i++){
        cout<<arr[i]<< " ";
    }
    cout<<endl;
    int arr1[3] = {1,2,3};
    int size1 = 3;
    extreme_print(arr1, size1);
}