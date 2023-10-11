#include "MyLibrary.h"
#include <iostream>
using namespace std;

Animal::Animal(const char *n, int k)
{
    name = new char[strlen(n) + 1];
    strcpy_s(name, strlen(n) + 1, n);
    kg = k;
}

void Animal::Print()
{
    cout << "Name: " << name << ", Kg: " << kg << endl;
}

Animal::~Animal()
{
    delete[] name;
}

Penguin::Penguin(const char *n, int kg, const char *cont) : Animal(n, kg)
{
    continent = new char[strlen(cont) + 1];
    strcpy_s(continent, strlen(cont) + 1, cont);
}

void Penguin::Eat()
{
    cout << "Penguin eats fish " << endl;
}

void Penguin::Sound()
{
    cout << "Penguin makes a sound." << endl;
}

void Penguin::Continent()
{
    cout << "Penguin is found in the Antarctic continent." << endl;
}

void Penguin::Swim()
{
    cout << "Penguin is a cool swimmer!" << endl;
}

Penguin::~Penguin()
{
    delete[] continent;
}

void Ship::Swim()
{
    cout << "The ship is swimming" << endl;
}

Parrot::Parrot(const char *n, int kg, const char *clr) : Animal(n, kg)
{
    color = new char[strlen(clr) + 1];
    strcpy_s(color, strlen(clr) + 1, clr);
}

void Parrot::Eat()
{
    cout << "Parrot eats " << endl;
}

void Parrot::Sound()
{
    cout << "Parrot is chirping." << endl;
}

void Parrot::Continent()
{
    cout << "Parrot can be found in various continents." << endl;
}

void Parrot::Fly()
{
    cout << "Parrot is flying in the sky." << endl;
}

Parrot::~Parrot()
{
    delete[] color;
}

void Plane::Fly()
{
    cout << "The plane is flying in the sky." << endl;
}

void same_func(ISwim *ptr)
{
    ptr->Swim();
}

void Fly_2(IFly *ptr)
{
    ptr->Fly();
}
