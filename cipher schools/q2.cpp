#include <iostream>
using namespace std;

class Animal {
public:
    virtual string sound() const {
        return "Some generic sound";
    }
};

class Dog : public Animal {
public:
    string sound() const override {
        return "Bark";
    }
};

class Cat : public Animal {
public:
    string sound() const override {
        return "Meow";
    }
};

int main() {
    Animal* animal1 = new Dog();
    Animal* animal2 = new Cat();

    cout << animal1->sound() << endl; 
    cout << animal2->sound() << endl; 
    delete animal1;
    delete animal2;

    return 0;
}
