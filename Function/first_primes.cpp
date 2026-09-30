#include <bits/stdc++.h>
using namespace std;

bool checkPrime(int n){
    if(n <= 1){
        return false;
    }
    
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int N;
    cout << "Enter N : ";
    cin >> N;
    
    cout << "Prime numbers upto " << N << "are : ";
    for(int i = 2; i <= N; i++){
        if(checkPrime(i)){
            cout << i << " ";
        }
    }
    cout << endl;
    
    return 0;
}