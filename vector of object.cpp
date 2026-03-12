#include <iostream>
#include <vector>
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
    vector<student> v;

    student s1;
    s1.id = 101;
    s1.gpa = 3.75;
    v.push_back(s1);

    student s2;
    s2.id = 102;
    s2.gpa = 3.90;
    v.push_back(s2);

    for(int i = 0; i < v.size(); i++)
        v[i].display();

    return 0;
}
