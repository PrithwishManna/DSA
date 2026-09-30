#include <iostream>
using namespace std;

int main() {
    int n;
    bool isPrime = true;
    cout << "Enter the value of n : ";
    cin >> n;

    for(int i = 2; i <= n - 1; i++){
        if(n % i == 0){
            isPrime = false;        // non-prime
            break;
        }
    }
    
    if (isPrime == true){
        cout << "Your number " << n << " is prime" << endl;
    }  else{
        cout << "Your number " << n << " is non-prime" << endl;
    }
    
    return 0; 
}