#include <iostream>

#include "animal.h"
#include "lib/food.h"
#include "food.h" // poorly named

int main() {
    std::cout << "Hello, World!" << std::endl;

    Food pizza("Pizza", 200);
    Animal garfield("Garfield", pizza);

    std::cout << garfield << std::endl;

    PoorlyNamed poorlyNamed;
    poorlyNamed.sayHi();

    return 0;
}