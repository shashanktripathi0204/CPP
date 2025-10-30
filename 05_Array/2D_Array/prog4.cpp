// Prog to find max array
#include <iostream>
#include <limits.h>
using namespace std;

void print2D(int arr[][3], int row, int col){
    for(int r = 0; r<row; r++){
        for(int c = 0; c<col; c++){
            cout<<arr[r][c]<<" ";
        }
        cout<<endl;
    }
}

int findMax(int arr[][3], int row, int col){
    int max = INT_MIN;
    for(int r = 0; r<row; r++){
        for(int c = 0; c<col; c++){
            if(arr[r][c] >= max){
                max = arr[r][c];
            }
        }
    }

    return max;
}

int findMin(int arr[][3], int row, int col){
    int min = INT_MAX;
    for(int r = 0; r<row; r++){
        for(int c = 0; c<col; c++){
            if(arr[r][c] <= min){
                min = arr[r][c];
            }
        }
    }

    return min;
}

void printDiagnoal1(int arr[][3], int row, int col){
    cout<<endl;
    for(int r = 0; r<row; r++){
        for(int c = 0; c<col; c++){
            if(r==c){
                cout<<arr[r][c]<<endl;
            }
        }
    }
}

void printDiagnoal2(int arr[][3], int row, int col){
    cout<<endl;
    for(int r = 0; r<row; r++){
        for(int c = 0; c<col; c++){
            if(r+c == 2){
                cout<<arr[r][c]<<endl;
            }
        }
    }
}

void transpose(int arr[][3], int row, int col){
    cout<<endl;
    cout<<"Print Transpose:-"<<endl;
    for(int i = 0; i< row; i++){
        for(int j = i; j< col; j++){
            if (i!=j){
                int k = arr[i][j];
                arr[i][j] = arr[j][i];
                arr[j][i] = k;
            }
        }
    }
}

int main(){
    int row = 3;
    int col = 3;

    int arr[3][3];

    for(int r = 0; r<row; r++){
        for(int c = 0; c<col; c++){
            int data;
            cout<<"Enter data for Index :- ("<<r<<", "<<c<<") = ";
            cin>>data;
            arr[r][c] = data;
            cout<<endl;
        }
    }
    cout<<"Original Array:- "<<endl;
    print2D(arr, row, col);
    transpose(arr, row, col);
    print2D(arr,row,col);
    cout<<findMax(arr, row, col)<<endl;
    cout<<findMin(arr, row, col)<<endl;
    printDiagnoal1(arr, row, col);
    printDiagnoal2(arr, row, col);
}