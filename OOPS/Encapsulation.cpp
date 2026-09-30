#include<iostream>
#include<string>
using namespace std;

// Actually this is "Encapsulation" = "Properties" + "Member Function"

class Teacher{
private:
    double salary;  // Data hiding
public:
    Teacher(){
        cout << "Hi, I'm Constructor\n";
    }
    //Properties / Attributes
    string name;
    string dept;
    string subject;

    //Methods /member functions
    void changeDept(string newDept){
        dept = newDept;
    }

    // Setter
    void setSalary(double s){
        salary = s;
    }

    // Getter
    double getSalary(){
        return salary;
    }
};

int main(){
    Teacher t1;                         // Constructor call
    t1.name = "Prithwish";
    t1.dept = "Mathematics";
    t1.subject = "Computer Progamming";
//  t1.salary = 8000;
    t1.setSalary(12000);

    cout << t1.name << endl;
    cout << t1.getSalary() << endl;

    return 0;
}
