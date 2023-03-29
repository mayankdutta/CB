#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main() {

  map<char, int> mp;
  string s = "aabbbc";

  for (char i : s) {
    mp[i] = mp[i] + 1;
  }
}
