#include "animal.h"
#include "../../../core/core.h"

Animal::Animal()
{
    this->name = "";
    this->type = DogType;
    this->age = 0;
    Logger::log("Call Animal default constructor", Colors::Blue);
}

Animal::Animal(string name, AnimalType type, uint16_t age)
{
    this->name = name;
    this->type = type;
    this->age = age;
    Logger::log("Call Animal constructor with params", Colors::Blue);
}

Animal::~Animal()
{
    Logger::log("Call Animal destructor", Colors::Blue);
}

void Animal::set_name(string name)
{
    this->name = name;
    Logger::log("Set name of animal", Colors::Green);
}

void Animal::set_type(AnimalType type)
{
    this->type = type;
    Logger::log("Set type of animal", Colors::Green);
}

void Animal::set_age(uint16_t age)
{
    this->age = age;
    Logger::log("Set age of animal", Colors::Green);
}

string Animal::get_name() const
{
    Logger::log("Get name of animal", Colors::Green);
    return this->name;
}

AnimalType Animal::get_type() const
{
    Logger::log("Get type of animal", Colors::Green);
    return this->type;
}

uint16_t Animal::get_age() const
{
    Logger::log("Get age of animal", Colors::Green);
    return this->age;
}