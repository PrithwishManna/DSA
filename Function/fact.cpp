#include <iostream>
using namespace std;

int factor(int n){
    int mul = 1;
    for(int i = n; i >= 1; i--){
        mul = mul * i;
    }
    
    return mul;
}

int main(){
    int a;
    cout << "Enter the value of which you want factorial : ";
    cin >> a;

    cout << factor(a) << endl;
    
    return 0;
}