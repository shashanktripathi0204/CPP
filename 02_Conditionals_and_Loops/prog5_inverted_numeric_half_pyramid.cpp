// Program to print inverted numeric half pyramid

/*
1 2 3 4 5 
1 2 3 4 
1 2 3 
1 2 
1 
*/

#include <iostream>
using namespace std;

int main(){
    int n = 5; // height of the pyramid

    for(int i = 0; i<n; i++){
        for(int j = 1; j<=n-i; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}