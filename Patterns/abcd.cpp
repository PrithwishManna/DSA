#include <iostream>
using namespace std;

int main(){
    int m, n;
    
    cout << "Enter the line no. n : ";          // Number of line
    cin >> n;
    
    cout << "Enter the star no. m : ";          // Number of elements at a line
    cin >> m;
    
    for(int i = 0; i < n; i++){
        char ch = 'A';
        for(int j = 0; j < m; j++){
            cout << ch << " ";
            ch = ch + 1;
        }
        cout << endl;
    }
    
    return 0;
}