// Prog to find unique element in an array where all the elements appear twice except one

#include <iostream>
using namespace std;

int find_unique(int arr[], int size){
    int ans = arr[0];
    for(int i = 1; i<size; i++){
        ans = ans ^ arr[i];
    }
    return ans;
}

int main(){
    int arr[13] = {8,1,3,4,5,7,5,4,3,2,8,2,7};
    int size = 13;
    cout<<find_unique(arr, size);
}