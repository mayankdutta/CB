

#include <iostream>
using namespace std;

class Vehicle {
public:
  // Vehicle() { cout << "In Vehicle\n"; }
  ~Vehicle() { cout << "In Vehicle\n"; }
};

class Car : public Vehicle {
public:
  // Car() { cout << "In Car\n"; }
  ~Car() { cout << "In Car\n"; }
};

class HondaCity : public Car {
public:
  // HondaCity() { cout << "In Honda City \n"; }
  ~HondaCity() { cout << "In Honda City \n"; }
};

int main() { HondaCity hondacity; }
