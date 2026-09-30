#include<iostream>
using namespace std;

void selectionSort(vector<int>& arr, int n){        // O(n^2)

    for(int i = 0; i < n - 1; i++){     // when only one element is left at the end, it is already sorted by default.
        int minIndex = i;

        for(int j = i + 1; j < n; j++){

            if(arr[j] < arr[minIndex])
                minIndex = j;
        }
        swap(arr[minIndex], arr[i]);
    }
}

int main(){
    vector<int> vec = {12, 21, 4, 8, 2, 78, 0, 9, 35, 23, 17};
    int size = vec.size();
    selectionSort(vec, size);

    cout << "Sorted vector : ";
    for(int i = 0; i < size; i++){
        cout << vec[i] << " ";
    }
    cout << endl;

    return 0;
}