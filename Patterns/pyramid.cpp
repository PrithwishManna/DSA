#include <iostream>
using namespace std;

int main(){
    int n;
    
    cout << "Enter the value of n : ";
    cin >> n;
    
    for(int i = 0; i < n; i++){
        // Spaces: n-i-1
        for(int j = 0; j < n-i-1; j++){
            cout << " ";
        }       
        // 1st numbers : i+1
        for(int k = 1; k <= i+1; k++){
            cout << k;
        }        
        // 2nd numbers 
        for(int m = i; m > 0; m--){
            cout << m;
        }
        
        cout << endl;        
    }
    return 0;
}