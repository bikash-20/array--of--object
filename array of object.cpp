#include <iostream>
using namespace std;

class student
{
public:
    int id;
    double gpa;

    void display()
    {
        cout << "ID: " << id << " GPA: " << gpa << endl;
    }
};

int main()
{
    student s[3];

    s[0].id = 101;  s[0].gpa = 3.75;
    s[1].id = 102;  s[1].gpa = 3.90;
    s[2].id = 103;  s[2].gpa = 4.00;

    for(int i = 0; i < 3; i++)
        s[i].display();

    return 0;
}
