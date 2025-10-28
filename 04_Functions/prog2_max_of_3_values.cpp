// prog to find max of 3 values

#include <iostream>
using namespace std;

int max3(int a, int b, int c){
    if (a>=b && a>=c) return a;
    else if (b>=a && b>=c) return b;
    else return c;
}


int main(){
    int a = max3(3,3,1);
    cout<<a<<endl;
}