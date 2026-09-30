#include<iostream>
#include<vector>
using namespace std;

void sortNum(vector<int>& nums){        // O(n)
    int n = nums.size();
    int count0 = 0, count1 = 0, count2 = 0;

    // O(n)
    for(int i = 0; i < n; i++){
        if(nums[i] == 0) count0++;
        else if(nums[i] == 1) count1++;
        else count2++;
    }
    // O(n)
    int idx = 0;
    for(int i = 0; i < count0; i++){
        nums[idx++] = 0;
    }
    for(int i = 0; i < count1; i++){
        nums[idx++] = 1;
    }
    for(int i = 0; i < count2; i++){
        nums[idx++] = 2;
    }
}

int main(){
    vector<int> vec = {0, 2, 0, 2, 1, 2, 1, 0, 1, 2, 1, 2};
    sortNum(vec);

    for(int i = 0; i < vec.size(); i++){
        cout << vec[i] << " ";
    }
    cout << endl;

    return 0;
}