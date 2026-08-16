// Transpose in O(1) space 

#include <iostream>
using namespace std;

void print2D_DynamicArray(int** arr, int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

// Transpose and modify 'arr' itself
void transpose(int*** arr, int &row, int &col) {
    int** old = *arr;

    // Create new structure with swapped dimensions
    int** newArr = new int*[col];
    for (int i = 0; i < col; i++) {
        newArr[i] = new int[row];
    }

    // Perform transpose
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            newArr[j][i] = old[i][j];
        }
    }

    // Free old memory
    for (int i = 0; i < row; i++)
        delete[] old[i];
    delete[] old;

    // Assign new array back to arr
    *arr = newArr;

    // Update dimensions
    swap(row, col);
}

int main() {
    int row = 3, col = 4, value = 0;

    // Create dynamic 2D array
    int** arr = new int*[row];
    for (int i = 0; i < row; i++) {
        arr[i] = new int[col];
    }

    // Initialize values
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            arr[i][j] = ++value;
        }
    }

    cout << "Original Matrix:" << endl;
    print2D_DynamicArray(arr, row, col);

    // Transpose modifies arr itself
    transpose(&arr, row, col);

    cout << "Transposed Matrix:" << endl;
    print2D_DynamicArray(arr, row, col);

    // Free memory
    for (int i = 0; i < row; i++)
        delete[] arr[i];
    delete[] arr;
}