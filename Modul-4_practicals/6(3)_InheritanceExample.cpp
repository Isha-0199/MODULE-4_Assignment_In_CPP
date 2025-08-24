#include <iostream>
#include <string>
using namespace std;

// Base Class
class Person 
{
    protected:
        string name;
        int age;

    public:
        void inputPersonDetails()
        {
            cout << "Enter name: ";
            cin.ignore(); // clear buffer before getline
            getline(cin, name);

            cout << "Enter age: ";
            cin >> age;
        }

        void showPersonDetails()
        {
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
        }
};

// Derived Class - Student
class Student : public Person
{
    private:
        string course;

    public:
        void inputStudentDetails()
        {
            inputPersonDetails();   // reuse base class function
            cout << "Enter course: ";
            cin >> course;
        }

        void showStudentDetails()
        {
            cout << "\n--- Student Details ---\n";
            showPersonDetails();   // reuse base class function
            cout << "Course: " << course << endl;
        }
};

// Derived Class - Teacher
class Teacher : public Person
{
    private:
        string subject;

    public:
        void inputTeacherDetails() 
        {
            inputPersonDetails();   // reuse base class function
            cout << "Enter subject: ";
            cin >> subject;
        }

        void showTeacherDetails()
        {
            cout << "\n--- Teacher Details ---\n";
            showPersonDetails();   // reuse base class function
            cout << "Subject: " << subject << endl;
        }
};

int main()
{
    Student s1;
    Teacher t1;

    cout << "Enter Student Information:\n";
    s1.inputStudentDetails();

    cout << "\nEnter Teacher Information:\n";
    t1.inputTeacherDetails();

    // Display both
    s1.showStudentDetails();
    t1.showTeacherDetails();

    return 0;
}

