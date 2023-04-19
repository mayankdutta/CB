
#include <iostream>

using namespace std;

int main() {
  string name[3];
  int roll_no[3];
  int age[3];
  int p_marks[3];
  int c_marks[3];
  int m_marks[3];

  for (int i = 0; i < 3; i++) {
    cin >> name[i];
    cin >> roll_no[i];
    cin >> age[i];
    cin >> p_marks[i];
    cin >> c_marks[i];
    cin >> m_marks[i];
  }

  for (int i = 0; i < 3; i++) {
    cout << name[i] << '\n';
    cout << roll_no[i] << '\n';
    cout << age[i] << '\n';
    cout << p_marks[i] << '\n';
    cout << c_marks[i] << '\n';
    cout << m_marks[i] << '\n';
  }

  // print marks of the student whose roll no. is {{something}}
}
