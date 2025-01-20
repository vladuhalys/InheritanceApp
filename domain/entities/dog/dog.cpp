#include "dog.h"

Dog::Dog(string name, uint16_t age) : Animal(name, DogType, age)
{
    Logger::log("Call Dog constructor with params", Colors::Yellow);
}

Dog::Dog()
{
    Logger::log("Call Dog default constructor", Colors::Yellow);
}

string Dog::make_sound()
{
    Logger::log("Dog barks", Colors::Pink);
    return "Woof!";
}

Dog::~Dog()
{
    Logger::log("Call Dog destructor", Colors::Yellow);
}