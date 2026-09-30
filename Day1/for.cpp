#include <iostream>
using namespace std;

int main() {
    int i, n;
    
    cout << "Enter the value of n : ";
    cin >> n;
    
    int sum = 0;

    for(i = 1; i <= n; i++){
        sum += i;
    }

    cout << "sum = " << sum << endl;
    
    return 0;  
}