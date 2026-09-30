#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>& A, int m, vector<int>& B, int n){               // O(m + n)
    int idx = m + n - 1, i = m - 1, j = n - 1;

    while(i >= 0 && j >= 0){
        if(A[i] > B[j]){
            A[idx] = A[i];
            idx--, i--;
        }
        else{
            A[idx] = B[j];
            idx--, j--;
        }
    }
    while(j >= 0){
        A[idx] = B[j];
        idx--, j--;
    }
}

int main(){
    vector<int> num1 = {1, 4, 9, 0, 0, 0};
    vector<int> num2 = {2, 6, 11};
    int m = 3, n = 3; 

    merge(num1, m, num2, n);

    cout << "Merged vector: ";
    for(int i = 0; i < num1.size(); i++){
        cout << num1[i] << " ";
    }
    cout << endl;

   return 0;
}