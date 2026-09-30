#include<iostream>
using namespace std;

void bubbleSort(vector<int>& arr, int n){           // O(n^2)

    for(int i = 0; i < n - 1; i++){
        bool swapped = false;

        for(int j = 0; j < n - i - 1; j++){
            //process element till n-i th index
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
        if(!swapped){               // array is already sorted
            break;
        }
    }
}

int main(){
    vector<int> vec = {12, 21, 4, 8, 2, 78, 0, 9, 35, 23, 17};
    int size = vec.size();
    bubbleSort(vec, size);

    cout << "Sorted vector : ";
    for(int i = 0; i < size; i++){
        cout << vec[i] << " ";
    }
    cout << endl;

    return 0;
}