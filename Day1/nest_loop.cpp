#include <iostream>
using namespace std;

int main(){
    int m, n;
    
    cout << "Enter the line no. n : ";
    cin >> n;
    
    cout << "Enter the star no. m : ";
    cin >> m;
    
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cout << "*" << " ";
        }
        cout << endl;
    }
    
    return 0;
}