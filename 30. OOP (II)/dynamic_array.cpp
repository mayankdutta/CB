

#include <iostream>
using namespace std;

class Vector {

  int *arr;
  int Size;
  int capacity;

public:
  Vector() {
    arr = new int[2];
    capacity = 2;
    Size = 0;
  }

  Vector(Vector &new_arr) {
    Size = new_arr.Size;
    capacity = new_arr.capacity;

    arr = new int[capacity];

    for (int i = 0; i < capacity; i++) {
      arr[i] = new_arr[i];
    }
  }

  void resize() {
    int *temp = new int[2 * capacity];

    for (int i = 0; i < capacity; i++) {
      temp[i] = arr[i];
    }

    delete[] arr;

    arr = temp;
    capacity *= 2;
  }

  void push_back(int number) {
    if (Size == capacity) {
      resize();
    }

    arr[Size] = number;
    Size++;
  }

  void pop_back() {
    if (Size == 0) {
      return;
    }
    arr[Size] = 0;
    Size--;
  }

  int size() { return Size; }

  int operator[](int index) {
    if (index >= Size) {
      return -1;
    }
    return arr[index];
  }

  void setIndex(int i, int v) { arr[i] = v; }
  void operator=(int value) {}
};

int main() {

  Vector arr;
  arr.push_back(1);
  arr.push_back(1);
  arr.push_back(1);
  arr.push_back(1);

  Vector arr2(arr); // copy, compiler default copy ---> shallow copy

  // google this, and work upon this.
  arr[1] = 5;

  arr.setIndex(1, 5); // original

  cout << '\n';
  for (int i = 0; i < arr2.size(); i++) {
    cout << arr2[i] << ' ';
  }
}
