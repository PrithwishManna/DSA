#include <bits/stdc++.h>
using namespace std;

void reverseVec(vector<int>& vec){
    int start = 0, end = vec.size() - 1;

    while(start < end){
        swap(vec[start], vec[end]);
        start++;
        end--;
    }

    for(int val : vec){
        cout << val << " ";
    }
    cout << endl;
}

int main(){
    vector<int> vec = {1, 45, 9, 20, 34, 87, 12, 35, 90};
    
    reverseVec(vec);

    return 0;
}