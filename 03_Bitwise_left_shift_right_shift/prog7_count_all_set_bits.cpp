// Prog to count all set bits in an integer, a set bit is 1

#include <iostream>
using namespace std;

int main(){
    int n = 7865; // the input number
    int count = 0;
    while(n != 0){
        int bit = (1&n);
        if (bit == 1) count++;
        n = n>>1;
    }
    // The total number of set bits in a integer
    cout<<count<<endl;
}
