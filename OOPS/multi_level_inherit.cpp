#include<iostream>
#include<string>
using namespace std;


class Person {
public: 
    string name;
    int age;
};

class Student : public Person {
public:
    int rollno;
};

class gradStud : public Student {
public:
    string researchArea;
};

int main(){
    gradStud g1;
    g1.name = "Dr. Banner";
    g1.researchArea = "Quantum Feild & Nucleo-Physics";

    cout << g1.name << endl;
    cout << g1.researchArea << endl;

    return 0;
}