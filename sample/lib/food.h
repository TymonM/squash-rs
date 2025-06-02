#ifndef FOOD_H
#define FOOD_H

#include <iostream>

class Food {
private:
    std::string name;
    int calories;
public:
    Food(const std::string& name, int calories) : name(name), calories(calories) {}

    std::string getName() const;
    int getCalories() const;
};

std::ostream& operator<<(std::ostream& os, const Food& food);

#endif // FOOD_H