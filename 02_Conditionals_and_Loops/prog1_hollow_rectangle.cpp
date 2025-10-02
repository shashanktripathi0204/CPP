// Program to print hollow rectangle

#include <iostream>
using namespace std;


int main(){
    cout << "enter the number of rows, row :- " << endl;
    int row;
    cin >> row;
    cout << "Enter the number of columns col :- " << endl;
    int col;
    cin >> col;
    for(int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            if(i == 0 || i == row - 1){
                cout<<"*";
            }
            else{
                if(j == 0 || j == col - 1){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }
        }
        cout<<endl;
    } 
}