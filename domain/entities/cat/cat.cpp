#include "cat.h"

Cat::Cat(string name, uint16_t age) : Animal(name, CatType, age)
{
    Logger::log("Call Cat constructor with params", Colors::Yellow);
}

Cat::Cat()
{
    Logger::log("Call Cat default constructor", Colors::Yellow);
}

string Cat::make_sound()
{
    Logger::log("Cat meows", Colors::Pink);
    return "Meow!";
}

Cat::~Cat()
{
    Logger::log("Call Cat destructor", Colors::Yellow);
}
