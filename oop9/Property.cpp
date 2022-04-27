#include "Property.h"



int Apartment::tax()
{
    return this-> worth / 1000;
}

int Car::tax()
{
    return this->worth / 200;
}

int CountryHouse::tax()
{
    return this->worth / 500;
}
