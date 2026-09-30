#include <bits/stdc++.h>
using namespace std;

int linearSearch(int arr[], int sz, int target){
    for(int i = 0; i < sz; i++){
        if(arr[i] == target){   // found
            return i;
        }
    }
    return -1;                  // not found
}

int main(){
    int num[] = {1, 4, 8, 90, 23, 12, 3, 5, 78, 69};
    int size = 10;
    int target = 12;

    cout << "Target position is " << linearSearch(num, size, target) << endl;

    return 0;
}

// Time complexity => O(n)