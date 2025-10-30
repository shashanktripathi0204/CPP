// Transpose

#include <iostream>
using namespace std;


void print2D_DynamicArray(int** arr, int row, int col){
    for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

// the arr is passed by reference
void transpose(int** arr, int row, int col){
    int row1 = col;
    int col1 = row;
    // Creating structure of the transpose array
    int** brr = new int*[row1];
    for(int i = 0; i<row1; i++){
        brr[i] = new int[col1];
    }

    // Transpose
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            brr[j][i] = arr[i][j];
        }
    }

    print2D_DynamicArray(brr, row1, col1);

        // Free memory
    for (int i = 0; i < row1; i++)
        delete[] brr[i];
    delete[] brr;

}

int main(){
    int row = 3, col = 4, value = 0;

    // Decalring a 2d array, only rows
    int** arr = new int*[row];
    // Declaring a 2d array, adding columns
    for(int i = 0; i<row; i++){
        arr[i] = new int[col];
    }

    // Inserting values to array
    for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
            arr[i][j] = ++value;
        }
    }
    print2D_DynamicArray(arr, row, col);
    transpose(arr, row, col);
    // print2D_DynamicArray(arr, row, col);
}