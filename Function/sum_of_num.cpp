#include <iostream>
using namespace std;


int numSum(int num){
    int digitSum = 0;
    
    while(num > 0){
        int lastDigit = num % 10;
        num /= 10;
        digitSum += lastDigit;
    }
    return digitSum;
}

int main(){
    int a;
    cout << "Enter an number : ";
    cin >> a;
    
    cout << numSum(a) << endl;          // Pass by reference
    
    return 0;
}