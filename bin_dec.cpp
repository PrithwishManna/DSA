#include <bits/stdc++.h>
using namespace std;

int binToDec(int binNum){
    int sum = 0, pow = 1;
    
    while(binNum > 0){
        int rem = binNum % 10;
        sum += (rem * pow);
        
        binNum /= 10;
        pow *= 2;
    }
    return sum;
}

int main(){
    int a;
    cout << "Enter a binary number : ";
    cin >> a;
    
    cout << "Your binary number " << a << " in decimal is : " << binToDec(a) << endl;
    
    return 0;
}