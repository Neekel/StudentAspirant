#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
    string name;
    string surname;
    string faculty;

    Student() {
        this->name = name;
        this->surname = surname;
        this->faculty = faculty;
    }
    Student(string, string, string) {
        this->name = name;
        this->surname = surname;
        this->faculty = faculty;
    }

    void setName(string) {
        cout << "Enter a name -> ";
        cin >> name;
    }
    void setSurname(string) {
        cout << "Enter a surname -> ";
        cin >> surname;
    }
    void setFaculty(string) {
        cout << "Enter a faculty -> ";
        cin >> faculty;
    }

    string getName() const
    {
        return name;
    }

    string getSurname() const
    {
        return surname;
    }

    string getFaculty() const
    {
        return faculty;
    }

    void Show()
    {
        cout << name << endl;
        cout << surname << endl;
        cout << faculty << endl;
    }

    //~Student();
};

class Aspirant : public Student
{
public:
    string PhD_work;

    Aspirant();
    Aspirant(string PhD_work) {
        this->PhD_work = PhD_work;
    }

    void setPhD_work(string) {
        cout << "Enter a PhD work of aspirant -> ";
        cin >> PhD_work;
    }

    string getPhD_work() const
    {
        return PhD_work;
    }

    void Show()
    {
        cout << PhD_work << endl;
    }

    //~Aspirant();
};

void main() {
   string _name, _surname, _faculty, _PhD_work;
    
   Student a(_name, _surname, _faculty);
   a.setName(_name);
   a.setSurname(_surname);
   a.setFaculty(_faculty);
   cout << "Student data: ";
   cout << "Name: " << a.getName() << "; Surname: " << a.getSurname() << "; Faculty: " << a.getFaculty() << endl;

   cout << "\nNow aspirant inherits class student !!!" << endl;
   Aspirant A(_PhD_work);
   A.setName(_name);
   A.setSurname(_surname);
   A.setFaculty(_faculty);
   A.setPhD_work(_PhD_work);
   cout << "Aspirant data: ";
   cout << "Name: " << A.getName() << "; Surname: " << A.getSurname() << "; Faculty: " << A.getFaculty() << "; PhD_work: " << A.getPhD_work() << endl;

}