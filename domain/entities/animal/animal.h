#ifndef ANIMAL_H
#define ANIMAL_H
#include "../../../core/core.h"

enum AnimalType
{
    DogType, ///< Represents a dog.
    CatType, ///< Represents a cat.
    BirdType ///< Represents a bird.
};

class Animal abstract
{
protected:
    string name; ///< The name of the animal.
    AnimalType type; ///< The type of the animal.
    uint16_t age; ///< The age of the animal in years.

public:
    Animal();
    Animal(string name, AnimalType type, uint16_t age);

    
    inline void set_name(string name);
    
    inline void set_type(AnimalType type);
    
    inline void set_age(uint16_t age);
    
    string get_name() const;
    
    AnimalType get_type() const;
    
    uint16_t get_age() const;

    virtual string make_sound() = 0;

    virtual ~Animal();
};

#endif // ANIMAL_H