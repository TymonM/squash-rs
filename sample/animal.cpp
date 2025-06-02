#include "animal.h"

#include <iostream>

std::string Animal::getName() const {
    return name;
}

Food Animal::getFavoriteFood() const {
    return favoriteFood;
}

std::ostream& operator<<(std::ostream& os, const Animal& animal) {
    os << "Animal\n";
    os << "\t Name\n\t\t" << animal.getName() << "\n";
    os << "\t Favorite Food\n\t\t" << animal.getFavoriteFood() << "\n";
    return os;
}