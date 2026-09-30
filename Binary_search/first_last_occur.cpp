#include<iostream>
using namespace std;

int firstOccur(int arr[], int size, int key){
    int start = 0, end = size - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;

    while(start <= end){
        if(arr[mid] == key){
            ans = mid;
            end = mid - 1;
        }
        else if(arr[mid] < key){
            start = mid + 1;
        }
        else if(arr[mid] > key){
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int lastOccur(int arr[], int size, int key){
    int start = 0, end = size - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;

    while(start <= end){
        if(arr[mid] == key){
            ans = mid;
            start = mid + 1;
        }
        else if(arr[mid] < key){
            start = mid + 1;
        }
        else if(arr[mid] > key){
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int main(){
    int num[] = {1, 3, 7, 7, 7, 8, 11, 13, 19};

    cout << "First Occurence of 7 is at index : " << firstOccur(num, 9, 7) << endl;
    cout << "Last Occurence of 7 is at index : " << lastOccur(num, 9, 7) << endl;

    return 0;
}