#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n : ";
    if (!(cin >> n) || n <= 0) return 0;

    // Top section
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i + 1; j++) cout << " ";
        cout << "*";
        if (i > 1) {
            for (int k = 1; k <= 2 * i - 3; k++) cout << " ";
            cout << "*";
        }
        cout << "\n";
    }

    // Middle separator line
    for (int i = 1; i <= 2 * n + 1; i++) {
        if (i == 1 || i == 2 * n + 1) cout << "*";
        else cout << " ";
    }
    cout << "\n";
    
    // Bottom section
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) cout << " ";
        cout << "*";
        int spaces = 2 * n - 3 - 2 * (i - 1);
        if (spaces > 0) {
            for (int j = 1; j <= spaces; j++) cout << " ";
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}