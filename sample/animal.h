#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>

#include "lib/food.h"

class Animal {
private:
    std::string name;
    Food favoriteFood;

public:
    Animal(const std::string& name, const Food& food) : name(name), favoriteFood(food) {}
    std::string getName() const;
    Food getFavoriteFood() const;
};

std::ostream& operator<<(std::ostream& os, const Animal& animal);

#endif // ANIMAL_H