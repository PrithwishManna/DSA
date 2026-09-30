#include <bits/stdc++.h>
using namespace std;

int main() {
    int nums[] = {10, 23, -3, 17, -28};
    int size = 5;
    
    int smallest = INT_MAX;
    int largest = INT_MIN;
    
    for(int i = 0; i < size; i++){
        smallest = min(nums[i], smallest);
        largest = max(nums[i], largest);
    }

    cout << smallest << endl;
    cout << largest << endl;

    for(int i = 0; i < size; i++){
        if(nums[i] == smallest){
            cout << "The smallest element position is " << i << endl;
        }
        else if(nums[i] == largest){
            cout << "The largest element position is " << i << endl;
        }
    }

    return 0;
}