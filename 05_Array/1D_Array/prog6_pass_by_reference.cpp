// Pass by reference and pass by value

#include <iostream>
using namespace std;

void incrementBy1(int &n){
    n = n + 1;
}

int main(){
    int n = 5;
    // k ki khud ki koi existence nahi hai, k is just another name of n, wo bas refernece kar raha hai n ko
    int &k = n; // reference of n passed to k, so now k is n and n is k
    cout<<k<<endl;
    k = 4; // since value of k is changed, it chnages the original value of n
    cout<<n<<endl;
    // ------------------------------------------
    int p = 1;
    cout<<p<<endl;
    incrementBy1(p);
    cout<<p<<endl;
}