

// question,
// take input of 10 no.s
// print their sum;

#include <iostream>
using namespace std;

int main() {

  // using array

  int Size = 10;
  int arr[Size];

  int i = 0;
  while (i < Size) {
    cin >> arr[i]; // compiler asked for user to enter the no.s
    i++;
  }

  int sum = 0;

  for (int i = 0; i < Size; i++) {
    sum += arr[i];
  }

  cout << "sum of array: " << sum << '\n';
}
