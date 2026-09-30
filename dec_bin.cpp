#include <bits/stdc++.h>
using namespace std;

int decToBinary(int decNum){
    int ans = 0, pow = 1;

    while(decNum > 0){
        int rem = decNum % 2;
        decNum /= 2;

        ans += (rem * pow);
        pow *= 10;
    }
    return ans;
}

int main(){
    int a;
    cout << "Enter an number : ";
    cin >> a;

    cout << "Your number " << a << " in binary is : " << decToBinary(a) << endl;

    return 0;
}