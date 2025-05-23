#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int main() {
    const int SIZE = 4;
    Animal* animals[SIZE];
    
    for (int i = 0; i < SIZE; ++i) {
        if (i < SIZE / 2)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }

    std::cout << "\n--- Making sounds ---\n" << std::endl;
    for (int i = 0; i < SIZE; ++i) {
        animals[i]->makeSound();
    }

    std::cout << "\n--- Deleting animals ---\n" << std::endl;
    for (int i = 0; i < SIZE; ++i) {
        delete animals[i];
    }

    std::cout << "\n--- Deep copy test ---\n" << std::endl;
    Dog originalDog;
    Dog copyDog = originalDog;
    copyDog = originalDog;

    Cat originalCat;
    Cat copyCat(originalCat);
    copyCat = originalCat;

    return 0;
}
