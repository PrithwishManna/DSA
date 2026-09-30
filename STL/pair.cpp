#include <bits/stdc++.h>
using namespace std;

int main(){
    
    pair<int, pair<char, int>> p = {1, {'c', 4}};
    
    cout << p.first << endl; // 1
    cout << p.second.first << endl; // class
    cout << p.second.second << endl; // 4
    
    return 0;
}