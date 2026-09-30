#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> vec = {1, 3, 5, 6, 9, 0};
    cout << "Vector : ";
    for(auto it = vec.begin(); it != vec.end(); it++){
        cout << *it << " ";
    }
    cout << endl;

    cout << "Reverse vector : ";
    for(auto it = vec.rbegin(); it != vec.rend(); it++){
        cout << *it << " ";
    }
    cout << endl;
    
    return 0;
}