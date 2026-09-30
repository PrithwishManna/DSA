#include <iostream>
using namespace std;

int main() {
    int i, n;
    
    cout << "Enter the value of n : ";
    cin >> n;
    
    int oddSum = 0;

    for(i = 1; i <= n; i++){
        if(i % 2 != 0){
            oddSum += i;
        }
    }

    cout << "OddSum = " << oddSum << endl;
    
    return 0;  
}