#include "animal.h"

/**
 * @brief Constructs an Animal object with the given name, type, and age.
 * @param name The name of the animal.
 * @param type The type of the animal.
 * @param age The age of the animal.
 */
Animal::Animal(string name, AnimalType type, uint16_t age)
{
    this->name = name;
    this->type = type;
    this->age = age;
}

/**
 * @brief Sets the name of the animal.
 * @param name The new name of the animal.
 */
void Animal::set_name(string name)
{
    this->name = name;
}

/**
 * @brief Sets the type of the animal.
 * @param type The new type of the animal.
 */
void Animal::set_type(AnimalType type)
{
    this->type = type;
}

/**
 * @brief Sets the age of the animal.
 * @param age The new age of the animal.
 */
void Animal::set_age(uint16_t age)
{
    this->age = age;
}

/**
 * @brief Gets the name of the animal.
 * @return The name of the animal.
 */
string Animal::get_name() const
{
    return this->name;
}

/**
 * @brief Gets the type of the animal.
 * @return The type of the animal.
 */
AnimalType Animal::get_type() const
{
    return this->type;
}

/**
 * @brief Gets the age of the animal.
 * @return The age of the animal.
 */
uint16_t Animal::get_age() const
{
    return this->age;
}