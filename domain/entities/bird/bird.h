#ifndef BIRD_H
#define BIRD_H

#include "../animal/animal.h"

class Bird : public Animal
{
public:
    Bird();
    Bird(string name, uint16_t age);

    string make_sound() override;

    ~Bird() override;
};

#endif // BIRD_H
