// Given an integer n you have to split the integer such that both the half are even if it is possible return true else return false 
// Example n = 6
// Can split in 2,4 so return true 
// n = 3
// Can't split return false

#include<iostream>
using namespace std;

bool isEven(int num){
    return (num > 2 && num % 2 == 0);
}

int main(){
    int n;
    cout << "Enter your Number : ";
    cin >> n;

    if (isEven(n)){
        cout << "true\n";
    } else{
        cout << "false\n";
    }

    return 0;
}
