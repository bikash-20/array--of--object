#include <iostream>
using namespace std;

class student
{
public:
    int id;
    double gpa;

    // constructor
    student(int i, double g)
    {
        id = i;
        gpa = g;
    }

    void display() const
    {
        cout << "ID: " << id << " GPA: " << gpa << endl;
    }
};

int main()
{
    student s1(101, 3.75);
    student s2(102, 3.90);

    s1.display();
    s2.display();

    return 0;
}
