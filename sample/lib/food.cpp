#include "food.h"

#include <iostream>

std::string Food::getName() const {
    return name;
}

int Food::getCalories() const {
    return calories;
}

std::ostream& operator<<(std::ostream& os, const Food& food) {
    os << food.getName() << ": Calories=" << food.getCalories();
    return os;
}