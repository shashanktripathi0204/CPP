// Prog of bitwise not

#include <iostream>
using namespace std;

int main(){
    int n = 2;
    cout<<~n<<endl;

    bool b = 1;
    /*
    The outout will be -2, because the bool b is having a value(irresective of what the value is apart from 0) it will
    be considered true in case of bool true translates to 1, therefore the negation of 1 is -2

    if however the bool value was 0, in that case it will be treated as false transaltign to 0
    and the negation of 0 is -1
    */
    cout<<~b<<endl;
}