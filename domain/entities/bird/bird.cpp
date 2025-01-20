#include "bird.h"

Bird::Bird(string name, uint16_t age) : Animal(name, BirdType, age)
{
    Logger::log("Call Bird constructor with params", Colors::Yellow);
}

Bird::Bird()
{
    Logger::log("Call Bird default constructor", Colors::Yellow);
}

string Bird::make_sound()
{
    Logger::log("Bird chirps", Colors::Pink);
    return "Chirp!";
}

Bird::~Bird()
{
    Logger::log("Call Bird destructor", Colors::Yellow);
}
