#include<iostream>
#include<vector>
using namespace std;

int partition(vector<int>& vec, int st, int end){
    int idx = st - 1, pivot = vec[end];

    for(int i = st; i < end; i++){
        if(vec[i] <= pivot){
            idx++; 
            swap(vec[i], vec[idx]);
        }
    }

    idx++;
    swap(vec[end], vec[idx]);
    return idx;

}

void quickSort(vector<int>& arr, int st, int end){
    if(st < end){
        int pivIdx = partition(arr, st, end);

        quickSort(arr, st, pivIdx - 1);         // Left part
        quickSort(arr, pivIdx + 1, end);        // Right part
    }
}

int main(){
    vector<int> vec = {2, 19, 8, 14, 25, 18, 23, 11, 17};

    quickSort(vec, 0, vec.size() - 1);
        
    for(int val : vec){
        cout << val << " ";
    }
    cout << endl;
    return 0;
}