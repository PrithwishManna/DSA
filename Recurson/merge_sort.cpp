#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>& arr, int st, int mid, int end){     // O(n)
    vector<int> temp;
    int i = st, j = mid + 1;

    while(i <= mid && j <= end){
        if(arr[i] <= arr[j]){
            temp.push_back(arr[i]);
            i++;
        }
        else{
            temp.push_back(arr[j]);
            j++;
        }
    }

    while(i <= mid){
        temp.push_back(arr[i]);
        i++;
    }

    while(j <= end){
        temp.push_back(arr[j]);
        j++;
    }

    for(int idx = 0; idx < temp.size(); idx++){
        arr[idx + st] = temp[idx];
    }
}

void mergeSort(vector<int>& arr, int st, int end){      // TC = O(n.log(n)); SC = O(n)
    if(st < end){
        int mid = st + (end - st) / 2;

        mergeSort(arr, st, mid);        //Left half
        mergeSort(arr, mid + 1, end);   //Right half

        merge(arr, st, mid, end);
    }
}

int main(){
    vector<int> vec = {2, 19, 8, 14, 25, 18, 23, 11, 17};
    
    mergeSort(vec, 0, vec.size() - 1);

    for(int val : vec){
        cout << val << " ";
    }
    cout << endl;

    return 0;
}