#ifndef CAT_H
#define CAT_H

#include "../animal/animal.h"

class Cat : public Animal
{
public:
    Cat() = default;
    Cat(string name, uint16_t age);

    string meow();
};

#endif // CAT_H
