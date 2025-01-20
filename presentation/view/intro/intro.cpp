#include "../view.h"
#include "../../../core/core.h"
#include "../../../domain/domain.h"

void View::intro()
{
    Dog * dog = new Dog();
    Cat * cat = new Cat();
    Bird * bird = new Bird();
    
    println(dog->bark());
    println(cat->meow());
    println(bird->chirp());
    
    delete dog;
    delete cat;
    delete bird;
}