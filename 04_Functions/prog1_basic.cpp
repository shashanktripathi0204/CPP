// prog function basic

#include <iostream>
using namespace std;

// Declaring function, this is needed if the function is declared below the main function
void printName(string name);

int main(){
    printName("Shri Ram");
    printName("Jai Bajrangbali");
}

void printName(string name){
    for(int i = 0; i<5; i++){
        cout<<name<<endl;
    }
}