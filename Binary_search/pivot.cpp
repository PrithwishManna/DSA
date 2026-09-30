#include<iostream>
using namespace std;

int getPivot(int arr[], int size){
    int start = 0, end = size - 1;
    int mid = start + (end - start) / 2;

    while(start < end){
        if(arr[mid] >= arr[0]){            
            start = mid + 1;
        }
        else{
            end = mid;
        }
        mid = start + (end - start) / 2;
    }
    return start;
}

int main(){
    int arr[] = {4, 10, 17, 1, 8};

    int index = getPivot(arr, 5);

    cout << "Pivot is " << arr[index] << endl;

    return 0;
}

/*
Initial State: start = 0, end = 4, mid = 0 + (4 - 0) / 2 = 2 (arr[2] = 17)

Iteration 1:
    Check condition: arr[mid] (17) ≥ arr[0] (3) → True.
    Update: start = mid + 1 → start = 2 + 1 = 3.
    New mid: 3 + (4 - 3) / 2 = 3 (arr[3] = 1).

Iteration 2:
    Check condition: arr[mid] (1) ≥ arr[0] (3) → False.
    Update: end = mid → end = 3.
    Loop Termination:
    
Now start (3) equals end (3), so the while loop ends.
Returns start, which is 3. */