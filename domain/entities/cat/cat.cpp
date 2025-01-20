#include "cat.h"

Cat::Cat(string name, uint16_t age) : Animal(name, CatType, age)
{
    
}

string Cat::meow()
{
    return "Meow! Meow!";
}
