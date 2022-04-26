#include "Property.h"
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    Apartment flat1(5000000);
    Apartment flat2(9000000);
    Apartment flat3(1100000);
    Car Toyota(5000000);
    Car Kia(2000000);
    CountryHouse house1(3000000);
    CountryHouse house2(15000000);

    Property* ptr_m[] = { &flat1, &flat2, &flat3, &Toyota, &Kia, &house1, &house2};

    for (int i = 0; i < 7; i++)
    {
        cout << "Your tax is " << ptr_m[i]->tax() << endl;
    }

    return 0;
}
