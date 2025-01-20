#ifndef ANIMAL_H
#define ANIMAL_H
#include "../../../core/core.h"

/**
 * @enum AnimalType
 * @brief Enumeration for different types of animals.
 */
enum AnimalType
{
    DogType, ///< Represents a dog.
    CatType, ///< Represents a cat.
    BirdType ///< Represents a bird.
};

/**
 * @class Animal
 * @brief A class representing a generic animal.
 */
class Animal
{
protected:
    string name; ///< The name of the animal.
    AnimalType type; ///< The type of the animal.
    uint16_t age; ///< The age of the animal in years.

public:
    /**
     * @brief Default constructor for Animal.
     */
    Animal() = default;

    /**
     * @brief Parameterized constructor for Animal.
     * @param name The name of the animal.
     * @param type The type of the animal.
     * @param age The age of the animal.
     */
    Animal(string name, AnimalType type, uint16_t age);

    /**
     * @brief Sets the name of the animal.
     * @param name The new name of the animal.
     */
    inline void set_name(string name);

    /**
     * @brief Sets the type of the animal.
     * @param type The new type of the animal.
     */
    inline void set_type(AnimalType type);

    /**
     * @brief Sets the age of the animal.
     * @param age The new age of the animal.
     */
    inline void set_age(uint16_t age);

    /**
     * @brief Gets the name of the animal.
     * @return The name of the animal.
     */
    string get_name() const;

    /**
     * @brief Gets the type of the animal.
     * @return The type of the animal.
     */
    AnimalType get_type() const;

    /**
     * @brief Gets the age of the animal.
     * @return The age of the animal.
     */
    uint16_t get_age() const;
};

#endif // ANIMAL_H