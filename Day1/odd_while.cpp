#include <iostream>
using namespace std;

int main() {
    int n, i = 1;
    
    cout << "Enter the value of n : ";
    cin >> n;
    
    int sum = 0;
    while(i <= n){
        if(i % 2 != 0){
            sum += i;
        }
        i++;
    }
    cout << "sum = " << sum << endl;
    
    return 0; 
}