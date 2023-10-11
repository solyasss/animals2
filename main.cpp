#include "MyLibrary.h"
#include <iostream>
using namespace std;

int main()
{

    Penguin penguin("Penguin", 50, "Antarctic");

    Ship ship;

    Parrot parrot("Parrot", 0.7, "Orange");

    Plane plane;

    same_func(&penguin);
    same_func(&ship);

    Fly_2(&parrot);
    Fly_2(&plane);

    return 0;
}
