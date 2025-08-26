#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int main() {
    std::cout << "Creating a Dog and Cat..." << std::endl;

    Dog dog;
    Cat cat;

    dog.makeSound();
    cat.makeSound();

    std::cout << "\nTrying to instantiate Animal directly..." << std::endl;

    // Animal *animal = new Animal();

    return 0;
}
