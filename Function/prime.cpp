#include <bits/stdc++.h>
using namespace std;

void checkPrime(int n){
    if (n <= 1) {
        cout << n << " is not a prime number.";
        return;
    }
    
    bool isPrime = true;
    
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0){
            isPrime = false;
            break;
        }
    }
    if(isPrime == true){
        cout << n << " is a prime number.";
    }
    else{
        cout << n << " is not a prime number.";
    }
}

int main(){
    int a;
    cout << "Enter an number : ";
    cin >> a;
    
    checkPrime(a);
    return 0;
}