#include "student.h"
#include <iostream>
using namespace std;

Student::Student(string Name, int Age) {
    setName(Name);
    setAge(Age);
}
void Student::setAge(int Age) {
    this->Age = Age;
}
void Student::setName(string Name) {
    this->Name = Name;
}
string Student::getName() {
    return Name;
}
int Student::getAge() {
    return Age;
}
void Student::printStudentInfo() {
    cout << "Student name is : " << Name << endl;
    cout << "Student age is : " << Age << endl;
}
