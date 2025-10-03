// prog of rigth shift operator


#include <iostream>
using namespace std;

int main(){
    int a = -100;
    /*
    int a, if we do right shift n times that is euqal to a / 2^n, in case of right shift , if the number is -vs signed then
    compiler will handel the comparison but if the number is -ve unsigned integer then the result will be a large +ve value
    */
    cout<<(a>>1)<<endl;
}