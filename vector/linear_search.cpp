#include<bits/stdc++.h>
using namespace std;

int linearSearch(const vector<int>& num, int tar){
    int index = 0;
    for(int val : num){
        if(val == tar){     // found
            return index;   // return the current index
        }
        index++;            // increment index for the next element
    }
    return -1;              // not found
}


int main(){
    vector<int> vec = {1, 4, 8, 90, 23, 12, 3, 5, 78, 69};
    int target = 12;

    cout << "Target position is " << linearSearch(vec, target) << endl;

    return 0;
}