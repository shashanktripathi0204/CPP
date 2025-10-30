// Lineaer search in 2D array

#include <iostream>
using namespace std;

void linearSearch(int arr[][3], int row, int col, int find){
    for(int r = 0; r<row; r++){
        for(int c = 0; c<col; c++){
            if(arr[r][c] == find){
                cout<<"Element found at Index :- ("<<r<<", "<<c<<")"<<endl;
                return;
            }
        }
        cout<<endl;
    }
    cout<<"Element Not Present"<<endl;
    return;
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
    linearSearch(arr, row, col, 5);
}