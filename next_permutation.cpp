#include <bits/stdc++.h>
using namespace std;

void nextPermutation(vector<int>& A){       // O(n)
    //1 find the pivot
    int pivot = -1, n = A.size();

    for(int i = n - 2; i >= 0; i--){
        if(A[i] < A[i + 1]){
            pivot = i;
            break;
        }
    }
    if(pivot == -1){
        reverse(A.begin(), A.end()); // In-place changes
        return;
    }

    //2 next larger element
    for(int i = n - 1; i > pivot; i--){
        if(A[i] > A[pivot]){
            swap(A[i], A[pivot]);
            break;
        }
    }

    //3 reverse (pivot + 1 to n - 1)
    int i = pivot + 1, j = n - 1;
    while(i <= j){
        swap(A[i], A[j]);
        i++, j--;
    }

}

int main(){
    vector<int> num = {1, 2, 3};
    nextPermutation(num);

    for(int i = 0; i < num.size(); i++){
        cout << num[i] << " ";
    }
    cout << endl;

    return 0;
}