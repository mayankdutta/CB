

#include <iostream>
#include <string>

using namespace std;

struct Student {

  // data members
  string name;
  int roll;
  double per;

  // member function
  void take_input();
  void show_output();
};


int main() {
  int n;
  cin >> n;

  /*
  Student student[n];

  for (int i = 0; i < n; i++) {
    student[i].take_input();
  }

  double mx = 0;
  for (int i = 0; i < n; i++) {
    mx = max(mx, student[i].per);
  }

  for (int i = 0; i < n; i++) {
    if (mx == student[i].per) {

      student[i].show_output();
      break;
    }
  }
  */

  Student s;

  s.name = "coding blocks";
  s.roll = 1; 
  s.per = 50;

  s.show_output();

}

void Student::show_output() {
  cout << "Name: " << name << '\n';
  cout << "Roll No: " << roll << '\n';
  cout << "Per: " << per << '\n';
  cout << '\n';
}

void Student::take_input() {
  cout << "Enter name: ";
  cin >> name;

  cout << "Enter roll no. : ";
  cin >> roll;

  cout << "Enter percentage : ";
  cin >> per;
  cout << "**************************\n";
}

