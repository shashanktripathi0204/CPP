// Prog of 2D vector

#include <iostream>
#include <vector>
using namespace std;

int main(){
    /*
    arr -> name of the vector
    5 -> row size
    vector<int>(10, 0) -> row item, initialised with a vector of size 10 that initialisezd with 0
    */
    vector<vector<int>> arr(5, vector<int>(10, 9));

    // rows = arr.size()
    // col = arr[i].size()
    for(int i = 0; i<arr.size(); i++){
        for(int j = 0; j<arr[i].size(); j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    // Jagged Array
    vector<vector<int>> brr;

    vector<int> v1(3, -1);
    vector<int> v2(2, -2);
    vector<int> v3(10, -3);
    vector<int> v4(5, 4);
    vector<int> v5(6, -5);
    vector<int> v6(1, -6);

    brr.push_back(v1);
    brr.push_back(v2);
    brr.push_back(v3);
    brr.push_back(v4);
    brr.push_back(v5);
    brr.push_back(v6);
    cout<<endl;
    for(int i = 0; i<brr.size(); i++){
        for(int j = 0; j<brr[i].size(); j++){
            cout<<brr[i][j]<<" ";
        }
        cout<<endl;
    }
    

}