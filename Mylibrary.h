#pragma once
#include <iostream>
#include <string.h>
using namespace std;

struct IFly
{
    virtual void Fly() = 0;
};

struct ISwim
{
    virtual void Swim() = 0;
};

class Animal
{
protected:
    char *name;
    int kg;

public:
    Animal() = default;
    Animal(const char *n, int k);
    void Print();
    virtual void Continent() = 0;
    virtual void Eat() = 0;
    virtual void Sound() = 0;
    virtual ~Animal();
};

class Penguin : public Animal, public ISwim
{
    char *continent;

public:
    Penguin() = default;
    Penguin(const char *n, int kg, const char *cont);
    virtual void Eat();
    virtual void Sound();
    virtual void Continent();
    virtual void Swim();
    ~Penguin();
};

class Ship : public ISwim
{
public:
    virtual void Swim();
};

class Parrot : public Animal, public IFly
{
    char *color;

public:
    Parrot() = default;
    Parrot(const char *n, int kg, const char *clr);
    virtual void Eat();
    virtual void Sound();
    virtual void Continent();
    virtual void Fly();
    ~Parrot();
};

class Plane : public IFly
{
public:
    virtual void Fly();
};

void same_func(ISwim *ptr);
void Fly_2(IFly *ptr);
