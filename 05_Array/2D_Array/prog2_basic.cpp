// Prog to create 2D array 

#include <iostream>
using namespace std;

void print2D(int arr[][5], int row, int col){
    cout<<"Printing Row Vise:- "<<endl;
    for(int r = 0; r<row; r++){
        for(int c = 0; c<col; c++){
            cout<<arr[r][c]<<" ";
        }
        cout<<endl;
    }
}

void print2D_column(int arr[][5], int row, int col){

    cout<<"Printing Column Vise:- "<<endl;

    for(int c = 0; c<col; c++){
        for(int r = 0; r<row; r++){
            cout<<arr[r][c]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int row = 3;
    int col = 5;

    int arr[3][5];

    for(int r = 0; r<row; r++){
        for(int c = 0; c<col; c++){
            int data;
            cout<<"Enter data for Index :- ("<<r<<", "<<c<<") = ";
            cin>>data;
            arr[r][c] = data;
            cout<<endl;
        }
    }

    print2D(arr, row, col);
    print2D_column(arr, row, col);
}