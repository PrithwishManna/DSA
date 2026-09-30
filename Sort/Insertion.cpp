#include<iostream>
using namespace std;

void insertionSort(vector<int>& arr, int n){        // O(n^2)
    for(int i = 1; i < n; i++){
        int curr = arr[i];
        int prev = i - 1;

        while(prev >= 0 && arr[prev] > curr){
            arr[prev + 1] = arr[prev];
            prev--;
        }
        arr[prev + 1] = curr;   // Placing the current element in its correct position
    }
}

int main(){
    vector<int> vec = {12, 21, 4, 8, 2, 78, 0, 9, 35, 23, 17};
    int size = vec.size();
    insertionSort(vec, size);

    cout << "Sorted vector : ";
    for(int i = 0; i < size; i++){
        cout << vec[i] << " ";
    }
    cout << endl;

    return 0;
}