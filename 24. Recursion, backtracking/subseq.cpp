



#include <bits/stdc++.h>

#include <iostream>
using namespace std;


void generate_subsequence(string s, int i, string current_value) {
  if (i == s.size()) {
    cout << current_value << '\n';
    return;
  }

  current_value.push_back(s[i]);
  generate_subsequence(s, i + 1, current_value);
  current_value.pop_back();

  generate_subsequence(s, i + 1, current_value);
}

int main() {
  string s = "abc";
  generate_subsequence(s, 0, "");
}
