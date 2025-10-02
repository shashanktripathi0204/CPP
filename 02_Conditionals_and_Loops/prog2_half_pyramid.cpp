// Program to print half pyramid

/*
*
**
***
****
*****
*/

#include<iostream>
using namespace std;

int main(){
    cout << "Give the height of triangle"<<endl;
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        for (int j = 0; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}