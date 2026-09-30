#include<iostream>
#include<string>
using namespace std;

class Print {
public:
    void show(int a){
        cout << "int : " << a << endl;
    }

    void show(char ch){
        cout << "Char : " << ch << endl;
    }

    void show(const string& str){
        cout << "String : " << str << endl;
    }
};

int main(){
    Print p1;

    p1.show(3);
    p1.show('S');
    p1.show("Sonu");

    return 0;
}