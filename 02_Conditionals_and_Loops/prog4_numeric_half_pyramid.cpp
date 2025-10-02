// Program to print numeric half pyramid
/*
1
12
123
1234
12345
*/


#include <iostream>
using namespace std;

int main(){
    int n = 5; // the height of pyramid
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout<<j;
        }
        cout<<endl;
    }
}