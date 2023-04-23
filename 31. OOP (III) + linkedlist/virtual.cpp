

#include <iostream>
using namespace std;

class Animal {
public:
  virtual void make_sound() = 0;
};

class Dog : public Animal {
public:
  // Override
  void make_sound() { cout << "Woof !! \n"; }
};

class Cat : public Animal {
public:
  // Override
  void make_sound() { cout << "Meow !! \n"; }
};

int main() {
  Animal *animal1;

  Animal *animal2 = new Dog;

  animal2->make_sound();
}
