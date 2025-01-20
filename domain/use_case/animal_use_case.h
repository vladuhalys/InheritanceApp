#ifndef ANIMAL_USE_CASE_H
#define ANIMAL_USE_CASE_H

#include "../entities/entities.h"

class AnimalUseCase
{
public:
    static void make_sound(Animal * animal)
    {
        Logger::log("Animal makes sound", Colors::BrightBlue);
        println(animal->make_sound());
    }
    static void make_sound(Animal ** animal, size_t size)
    {
        Logger::log("Animals make sounds", Colors::BrightBlue);
        for (size_t i = 0; i < size; i++)
        {
            println(animal[i]->make_sound());
        }
    }
    static void delete_animals(Animal ** animals, size_t size)
    {
        Logger::log("Delete all animals", Colors::BrightBlue);
        for (size_t i = 0; i < size; i++)
        {
            delete animals[i];
        }
        delete[] animals;
    }
};

#endif // ANIMAL_USE_CASE_H
