#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<char> vec = {'a', 'r', 'p', 't', 'w', 'k', 'b'};
    for(char val : vec){
        cout << val << endl;
    }
    cout << endl;
    for(int val : vec){
        cout << val << endl;
    }

    return 0;
}