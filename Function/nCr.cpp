#include <iostream>
using namespace std;

long fact(int a){
    long mul = 1;

    for(int i = a; i >= 1; i--){
        mul *= i;
    }
    return mul;
}

long long nCr(int n, int r){
    long long result = fact(n) / (fact(r) * fact(n - r));
    
    return result;
}

int main(){
    int n, r;

    cout << "Enter the value of n : ";
    cin >> n;
    cout << "Enter the value of r : ";
    cin >> r;

    if (r < 0 || n < 0 || r > n) {
        cout << "Invalid input! Ensure that 0 <= r <= n." << endl;
    } else {
        cout << n << "C" << r << " = " << nCr(n, r) << endl;
    }

    return 0;
}