// Progam to print hollow full pyramid

/*

    *
   * *
  *   *
 *     *
*********
*/
#include <iostream>
using namespace std;

int main(){
    int n = 5;
    for(int row = 0; row < n; row++){
        // 1st half left side
        for(int col_space = 0; col_space < n - row - 1; col_space++){
            cout<<" ";
        }
        for(int col = 0; col<= row; col++){
            // print the first *
            if (col == 0){
                cout<<"*";
            }
            // print space within the triangle
            if (row != n - 1 && col < row){
                cout <<" ";
            }
            // print the remaining * of the last row of the first half of the triangle after printing the first *
            else if (col > 0 && row == n - 1){
                cout<<"*";
            }
        }
        
        // 2nd half right side
        for(int col = 0; col < row; col++){
            // print the last row of the second half of the triagnle
            if (row == n - 1){
                cout<<"*";
            }
            // print the last * of every row that is not the last row in the second half of the triangle
            else{
                if (row - col == 1 && row != n - 1){
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