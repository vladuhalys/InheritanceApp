#ifndef CAT_H
#define CAT_H

#include "../animal/animal.h"

class Cat : public Animal
{
public:
    Cat();
    Cat(string name, uint16_t age);

    string make_sound() override;

    ~Cat() override;
};

#endif // CAT_H
