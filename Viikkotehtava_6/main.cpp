#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include "student.h"
using namespace std;

int main ()
{
    int selection =0;
    vector<Student>studentList;
    do
    {
        cout<<endl;
        cout<<"Select"<<endl;
        cout<<"Add students = 0"<<endl;
        cout<<"Print all students = 1"<<endl;
        cout<<"Sort and print students according to Name = 2"<<endl;
        cout<<"Sort and print students according to Age = 3"<<endl;
        cout<<"Find and print student = 4"<<endl;
        cin>>selection;

        switch(selection)
        {
        case 0:            //Kysy opiskelijan ikä ja nimi
        {                   // Lisää uusi student StudentList vektoriin.
            string nimi;
            int ika;

            cin.ignore(); //ettei int ika input vaikeuttaisi getline(cin,nimi) kanssa
            cout << "Please insert student name : ";
            getline(cin,nimi); //normi cin = ei voi laittaa koko nimeä, cin mahdollistaa vain etunimen.
            cout << "An please insert student age ";
            cin >> ika;
            Student newStudent(nimi,ika);
            studentList.emplace_back(newStudent);
            cout << "New student added to the system!" << endl;
            break;
        }
        case 1:
        {    // Tulosta StudentList vektorin kaikkien opiskelijoiden
            // nimet.
            if (studentList.empty()) {
                cout << "Student list is empty" << endl;
            } else {
                cout << "Student namelist :" << endl;
                for (auto& Student : studentList)
                {
                    cout << Student.getName() << endl;
                }
            }
            break;
        }
        case 2: // Järjestä StudentList vektorin Student oliot nimen mukaan algoritmikirjaston sort funktion avulla
        {       // ja tulosta printStudentInfo() funktion avulla järjestetyt opiskelijat
            if (studentList.empty()) {
                cout << "Student list is empty" << endl;
            } else {
            sort(studentList.begin(), studentList.end(),[](Student & a, Student & b){return a.getName() < b.getName();});
            cout << "Students listed alphabetically from A->Z : " << endl;
            for (auto & s : studentList) {
                s.printStudentInfo();
                cout << "\n";
                }
            }
            break;
        }
        case 3:
        {
            if (studentList.empty()) {
                cout << "Student list is empty" << endl;
            } else {
            sort(studentList.begin(), studentList.end(),[](Student & a, Student & b){return a.getAge() > b.getAge();});
            cout << "Students listed oldest to youngest : " << endl;
            for (auto & s : studentList) {
                s.printStudentInfo();
                cout << "\n";
            }
            }
            // Järjestä StudentList vektorin Student oliot iän mukaan
            // algoritmikirjaston sort funktion avulla
            // ja tulosta printStudentInfo() funktion avulla järjestetyt
            // opiskelijat
            break;
        }
        case 4:
        {
            string input;
            cin.ignore();
            cout << "Please insert student name to search: ";
            getline(cin,input);

            //Seuraavan rivin auto it voisi olla myös vector<Student>::iterator it
            auto it = find_if(studentList.begin(),studentList.end(),[&](Student s) {return s.getName().find(input) != string::npos;});
            //find(input)string::npos mahdollistaa etsiä vain etu tai sukunimellä, ei tarvi koko nimeä löytääkseen oppilasta
            //jos case 0 ei olisi mahdollista laittaa etu- ja sukunimeä (eli vain cin) käytössä olisi
            //return s.getName() == input;
            if (it != studentList.end())
            {
                cout << "Student found!" << endl;
                it->printStudentInfo();
            }
            else
            {
                cout << "Student not found. \n" << endl;
            }
            // Kysy käyttäjältä opiskelijan nimi
            // Etsi studentListan opiskelijoista algoritmikirjaston
            // find_if funktion avulla löytyykö käyttäjän antamaa nimeä
            // listalta. Jos löytyy, niin tulosta opiskelijan tiedot.
            break;
        }
        default:
        cout<< "Wrong selection, stopping..."<<endl;
        break;
        } }
    while(selection < 5);
    return 0;
}

