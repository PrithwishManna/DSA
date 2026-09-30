#include <bits/stdc++.h>
using namespace std;

void revArr(int arr[], int n){
    int start = 0, end = n - 1;
    
    while(start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int arr[] = {1, 45, 9, 20, 34, 87, 12, 35, 90};
    int size = sizeof(arr) / sizeof(int);
    
    revArr(arr, size);

    return 0;
}