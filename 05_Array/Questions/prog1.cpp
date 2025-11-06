// Prog to segregate -ve and +ve elemenst in an array
// i/p > - 5 -3 12 -7 0 8 -1 15 -9 4
// o/p > -9 -3 -1 -7 0 8 12 15 5 4 

#include <iostream>
#include <algorithm>
using namespace std;

void print(int arr[], int size){
    for(int i = 0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

// order of the elements in the array is not preserved
void segregate(int arr[], int size){
    int left = 0;
    int right = size - 1;
    while(left < right){
        if(arr[left]>0 && arr[right]<0){
            int k = arr[left];
            arr[left] = arr[right];
            arr[right] = k;
            left++;
            right--;
        }
        else if (arr[left]<0 && arr[right]>0){
            left++;
            right--;
        }
        else if (arr[left]<0 && arr[right]<0){
            left++;
        }
        else{
            right--;
        }
    }
}


void segregate2(int arr[], int size){
    int index = 0;
    int j = 0; // contains the index of the 1st position, of +ve element where swap will happen 

    for(index = 0; index < size; index++){
        if( arr[index]<0 ){
            swap(arr[j], arr[index]);
            j++;
        }
    }
}

int main(){
    int size = 10;
    int arr[10] = {-5, -3, -12, -7, -10, -8, -1, -15, -9, -4};
    print(arr, size);
    segregate(arr,size);
    print(arr, size);
}