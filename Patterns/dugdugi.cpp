#include <bits/stdc++.h>
using namespace std;

int main() {
    int i, j, n;
    cout << "Enter the value of n : ";
    cin >> n;
    
    // Upper half
    for(i = 1; i <= n; i++){
        // Print left stars
        for(j = 1; j <= i; j++){
            cout << "*";
        }
        // Print spaces in the middle
        int spaces = 2 * (n - i);
        for(j = 1; j <= spaces; j++){
            cout << " ";
        }
        // Print right stars
        for(j = 1; j <= i; j++){
            cout << "*";
        }
        cout << endl;
    }
    
    // Lower half
    for(i = n; i >= 1; i--){
        // Print left stars
        for(j = 1; j <= i; j++){
            cout << "*";
        }
        // Print spaces in the middle
        int spaces = 2 * (n - i);
        for(j = 1; j <= spaces; j++){
            cout << " ";
        }
        // Print right stars
        for(j = 1; j <= i; j++){
            cout << "*";
        }
        cout << endl;
    }
    
    return 0;
}