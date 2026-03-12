#include <iostream>
#include <vector>
using namespace std;

class Student
{
public:
    int id;
    double gpa;

    void input()
    {
        cout << "Enter ID and GPA: ";
        cin >> id >> gpa;
    }

    void display() const
    {
        cout << "ID: " << id << " GPA: " << gpa << endl;
    }
};

int main()
{
    vector<Student> students;
    int numberOfStudents;

    cout << "Enter number of students: ";
    cin >> numberOfStudents;

    for(int i = 0; i < numberOfStudents; i++)
    {
        Student s;
        s.input();
        students.push_back(s);
    }

    int searchId;
    cout << "Enter student ID to search: ";
    cin >> searchId;

    bool found = false;
    for(const Student& s : students)
    {
        if(s.id == searchId)
        {
            s.display();
            found = true;
            break;
        }
    }

    if(!found)
    {
        cout << "Student not found." << endl;
    }

    return 0;
}
