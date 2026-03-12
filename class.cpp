#include<iostream>
using namespace std;
class student
{
    public :
    int id;
    double gpa;
    void display()
    {
        cout << id << "  " << gpa << endl;
    }

};

int main()
{
    
    
    student bikash, ebad;

    bikash.id = 101;
    bikash.gpa = 3.92;
    bikash.display();

    ebad.id = 84;
    ebad.gpa = 4.0;
    ebad.display();
    return 0;

}


   // student bikash[] = {chagol,goru}; array of object
   //vector < student> names = {boltu}; vector of object
  // names.pushback{};
  //you can create multiple object here
    
    /* student bikash;
    bikash.id = 101;
    bikash.gpa = 3.92;
    cout << bikash.id << "  " << bikash.gpa; */
    




