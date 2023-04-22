



#include <iostream>
using namespace std;

class Animal {
public:
  virtual void speak() { cout << "My voice is :"; }
};

class Dog : public Animal {
public:
  void speak() { cout << "Woof !! \n"; }
};

class Cat : public Animal {
public:
  void speak() { cout << "Meow !! \n"; }
};

int main() {
  Animal *animal;

  Cat cat;
  Dog dog;

  animal = &cat;

  animal->speak();
}
