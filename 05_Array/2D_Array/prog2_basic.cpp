// Prog to print 2D array in 5 differet ways row wise, column wise, snake, diagonal, spiral

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

void print2D_snake_traversal(int arr[][5], int row, int col){
    cout<<"Printing Sanke Traversal:- "<<endl;
    for(int r = 0; r<row; r++){
        for(int c = 0; c<col; c++){
            if(r%2 == 0){
                cout<<arr[r][c]<<" ";
            }
            else{
                cout<<arr[r][col - c - 1]<<" ";
            }
        }
        cout<<endl;
    }
}


void print2D_diagonal_traversal(int arr[][5], int row, int col){
    cout<<"Printing Diagonal Traversal:- "<<endl;
    int max_sum = row + col;
    int count = 0;
    while(count < max_sum){
        int r = 0;
        while(r<row){
            int c = count - r;
            if(c>=0 && c<col){
                cout<<arr[r][c]<<" ";
            }
            r++;
        }
        cout<<endl;
        count++;
    }
}

void print2D_spiral_traversal(int arr[][5], int row, int col){
    cout<<"Printing Spiral Traversal:- "<<endl;
    int row_start = 0;
    int row_end = row-1;
    int col_start = 0;
    int col_end = col-1;
    int total_numerical = row*col;
    int count = 0;
    while(count<total_numerical){
        int c = col_start;
        while(c<=col_end && count < total_numerical){
            cout<<arr[row_start][c]<<" ";
            c++;
            count++;
        }
        cout<<endl;
        row_start = row_start + 1;
        int r = row_start;
        while(r<=row_end && count < total_numerical){
            cout<<arr[r][col_end]<<" ";
            r++;
            count++;
        }
        cout<<endl;
        col_end = col_end - 1;
        c = col_end;
        while(c>=col_start && count < total_numerical){
            cout<<arr[row_end][c]<<" ";
            c--;
            count++;
        }
        cout<<endl;
        row_end = row_end - 1;
        r = row_end;
        while(r>=row_start && count < total_numerical){
            cout<<arr[r][col_start]<<" ";
            r--;
            count++;
        }
        cout<<endl;
        col_start = col_start + 1;
        
    }

}

int main(){
    int row = 3;
    int col = 5;

    
    // user defined values
    // for(int r = 0; r<row; r++){
    //     for(int c = 0; c<col; c++){
    //         int data;
    //         cout<<"Enter data for Index :- ("<<r<<", "<<c<<") = ";
    //         cin>>data;
    //         arr[r][c] = data;
    //         cout<<endl;
    //     }
    // }

    int arr[3][5] = {
        {1,2,3,4,5},
        {6,7,8,9,10},
        {11,12,13,14,15}
    };

    // print2D(arr, row, col);
    // print2D_column(arr, row, col);
    // print2D_snake_traversal(arr, row, col);
    // print2D_diagonal_traversal(arr, row, col);
    print2D_spiral_traversal(arr, row, col);
}