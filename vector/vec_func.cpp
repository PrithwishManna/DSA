#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<char> vec = {'a', 'r', 'p', 't', 'w', 'k', 'b'};

    cout << "size = " << vec.size() << endl;                // Gives size of vector

    vec.push_back('s');                                     // This adds elements at 'Last'
    vec.push_back('z');

    vec.pop_back();                                         // This deletes element from 'Last'

    cout << vec.front() << endl;                            // Gives first element
    cout << vec.back() << endl;                             // Gives last element
    cout << vec.at(4) << endl;                              // Gives any element at position 

    cout<<endl;
    for(char val : vec){
        cout << val << endl;
    }

    return 0;
}