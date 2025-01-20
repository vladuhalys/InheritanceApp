#ifndef BIRD_H
#define BIRD_H

#include "../animal/animal.h"

class Bird : public Animal
{
public:
    Bird() = default;
    Bird(string name, uint16_t age);

    string chirp();
};

#endif // BIRD_H
