

#include <iostream>

using namespace std;

struct Student {
  string name; 
  int roll_no; 
  int age; 
  int p_marks; 
  int c_marks; 
  int m_marks; 
};

int main() {
  // string name;
  // int roll_no;
  // int age;
  // int p_marks;
  // int c_marks;
  // int m_marks;

  Student s1;

  cin >> s1.name; 
  cin >> s1.roll_no; 
  cin >> s1.age; 
  cin >> s1.p_marks; 
  cin >> s1.c_marks; 
  cin >> s1.m_marks; 

  Student s2;

  s2.name = "b";
  s2.roll_no = 2; 
  s2.age = 23; 
  s2.p_marks = 18; 
  s2.c_marks = 28; 
  s2.m_marks = 38; 




}
