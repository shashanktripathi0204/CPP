// Initialise


// To Initialise an array we atleast need the column size because without it, initilization won't work, c * i + j
#include <iostream>
using namespace std;

int main(){
    int arr[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    // Initialise without number of rows, without column it is not possible to initialise 2D array
    int brr[][3] = {
    {1,2,3},
    {4,5,6},
    {7,8,9}
    };
    
}