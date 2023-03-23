#include <vector>
#include <iostream>
#include <set>

using namespace std;

int main() {

  vector<int> arr(5, -1); // {-1, -1, -1, -1, -1}

  cout << "Printing vector: ";
  for (auto x: arr) {
    cout << x << ' ';
  } cout << '\n';

  // set<int> st; 

  multiset<int> st; 
  for (auto x: arr) {
    st.insert(x);
  }


  cout << "Elements in set: ";
  for (auto i: st) {
    cout << i << ' ';
  }
}

