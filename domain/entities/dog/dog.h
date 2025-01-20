#ifndef DOG_H
#define DOG_H

#include "../animal/animal.h"

class Dog : public Animal
{
public:
    Dog() = default;
    Dog(string name, uint16_t age);

    string bark();
};
#endif // DOG_H
