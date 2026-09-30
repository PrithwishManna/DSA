#include<iostream>
#include<string>
using namespace std;

class Student {
public:
    string name;

    Student(){
        cout << "Non-Parametrized...\n";
    }

    Student(string name){
        this->name = name;
        cout << "Parametrized..\n";
    }
};

int main(){
    Student s1;
    Student s2("Sonu");

    return 0;
}