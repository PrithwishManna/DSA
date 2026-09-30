#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;
    int mid = start + ((end - start) / 2);

    while(start <= end){
        if(arr[mid] == key){
            return mid;
        }

        if(arr[mid] < key){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = start + ((end - start) / 2);
    }
    return -1;
}


int main(){
    int even[] = {1, 4, 9, 34, 67, 85, 97, 109};
    int odd[] = {4, 8, 15, 23, 30, 78, 89};

    cout << "Index of 97 is " << binarySearch(even, 8, 97) << endl;
    cout << "Index of 30 is " << binarySearch(odd, 7, 30) << endl;

    return 0;
}