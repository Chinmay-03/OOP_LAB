//Chinmay Kotkar
//SE B 29
#include<iostream>
#include<string>
using namespace std;

class Student_Info {

  char name[256], gender[5];
  int age, rollno;

  public:
    void getdata();
    void display();

}
stud;

void Student_Info::getdata() {
  cout << "Enter name" << endl;
  cin.getline(name, 256);
  cout << "Enter gender" << endl;
  cin.getline(gender, 5);
  cout << "Enter roll no" << endl;
  cin >> rollno;
  cout << "Enter age" << endl<<endl;
  cin >> age;

}

void Student_Info::display() {
  cout << name << "\t" << gender << "\t" << rollno << "\t" << age << endl;
}

int main() {
  stud.getdata();
  stud.display();
  return 0;
}
