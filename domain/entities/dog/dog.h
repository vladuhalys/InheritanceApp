#ifndef DOG_H
#define DOG_H

#include "../animal/animal.h"

class Dog : public Animal
{
public:
    Dog();
    Dog(string name, uint16_t age);

    string make_sound() override;

    ~Dog() override;
};
#endif // DOG_H
