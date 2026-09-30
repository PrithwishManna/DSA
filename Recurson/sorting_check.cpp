#include <iostream>
#include <vector>
using namespace std;

// check if array is sorted
bool isSorted(vector<int> arr, int n){
    if(n == 0 || n == 1){
        return true;
    }

    return arr[n - 1] >= arr[n - 2] && isSorted(arr, n - 1);
}


int main(){

    vector<int> vec = {2, 3, 8, 9, 2, 11};

    if(isSorted(vec, vec.size())){
        cout << "Your array is sorted." << endl;
    }
    else{
        cout << "Your array is not sorted.\n";
    }
    return 0;
}