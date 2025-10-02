// Program to print full pyramid

/*
         *
       * * *
     * * * * *
   * * * * * * *
 * * * * * * * * *
*/

#include <iostream>
using namespace std;

int main(){
    int n = 10;
    for(int row = 0; row < n; row++){
        // 1st half left side
        for(int col_space = 0; col_space < n - row - 1; col_space++){
            cout<<"  ";
        }
        for(int col = 0; col<= row; col++){
            cout<<" *";
        }
        
        // 2nd half right side
        for(int col = 0; col < row; col++){
            cout<<" *";
        }
        
        cout<<endl;
    }
}