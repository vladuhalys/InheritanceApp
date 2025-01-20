#include "bird.h"

Bird::Bird(string name, uint16_t age) : Animal(name, BirdType, age)
{
    
}

string Bird::chirp()
{
    return "Chirp! Chirp!";
}
