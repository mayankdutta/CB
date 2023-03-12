
#include <cstring>
#include <iostream>
using namespace std;

int main() {
  char name[30]; 
  cin >> name;

  int count_vowels = 0;

  for (int i = 0; i < strlen(name); i++) {
    char temp_name = tolower(name[i]);

    if (
        temp_name == 'a' || 
        temp_name == 'e' || 
        temp_name == 'i' || 
        temp_name == 'o' || 
        temp_name == 'u'
        ) {

      count_vowels ++;
    }
  }

  cout << "Count : " << count_vowels << '\n';
}
