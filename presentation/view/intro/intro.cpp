#include "../view.h"
#include "../../../core/core.h"
#include "../../../domain/domain.h"

void View::intro()
{
    size_t size = 3;
    Animal ** animals = new Animal*[size];
    animals[0] = new Dog("Buddy", 5);
    animals[1] = new Cat("Whiskers", 3);
    animals[2] = new Bird("Tweety", 1);

    AnimalUseCase::make_sound(animals, size);
    AnimalUseCase::delete_animals(animals, size);
}