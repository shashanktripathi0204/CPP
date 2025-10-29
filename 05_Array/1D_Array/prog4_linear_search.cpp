// prog4_linear_search

#include <iostream>
using namespace std;


int linear_search(int arr[], int size, int n){
    bool flag = 0;
    int index = -1;
    for (int i = 0; i<size; i++){
        if (n == arr[i]){
            
            flag = 1;
            index = i;
            break;
        }
    }

    if (flag == 1)
        return index;
    else return -1;
}

int main(){
    int n;
    cout<<"enter the value to search:- ";
    cin>>n;

    int arr[10] = {1,2,4,3,5,6,9,0,8,7};

    

    if (linear_search(arr, 10, n) != -1)
        cout<<"Found "<<n<< " at index "<<linear_search(arr, 10, n)<<endl;
    else
        cout<<"Element Not Present";
    
}