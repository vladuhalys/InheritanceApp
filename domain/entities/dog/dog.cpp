#include "dog.h"

Dog::Dog(string name, uint16_t age) : Animal(name, DogType, age)
{
    
}

string Dog::bark()
{
    return "Woof! Woof!";
}
