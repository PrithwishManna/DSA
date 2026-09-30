#include<iostream>
#include<string>
using namespace std;

class Person{
public:
    string name;
    int age;
    
    // Copy Constructor
    /* Person(string name, int age){
        this->name = name;
        this->age = age; 
    } */
   Person(){
        cout << "Parent Constructor...\n";
   }

   ~Person(){
        cout << "Parent Destructor...\n";
   }

};

// Inheritance
class Student : public Person {
public:
    int rollno;

    Student(){
        cout << "Child Constructor...\n";
    }

    void getInfo(){
        cout << "name : " << name << endl;
        cout << "age : " << age << endl;
        cout << "rollno : " << rollno << endl;
    }

    ~Student(){
        cout << "Student Destructor...\n";
   }
};

int main(){
    Student s1;
    s1.name = "Sonu";
    s1.age = 23;
    s1.rollno = 231;

    s1.getInfo();

    return 0;
}