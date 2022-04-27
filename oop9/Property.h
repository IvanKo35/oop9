#pragma once
#include <iostream>;

class Property
{
protected:
	int worth;
public:
	Property() {}
	
	Property(int worth) : worth(worth) {}
	virtual int tax() = 0;
	Property(const Property& property) 
	{
		this->worth = property.worth;
	}

	virtual ~Property()
	{
		//std::cout << "destructed" << std::endl;
	}
};

class Apartment : public Property
{
public:
	Apartment(int worth) : Property(worth) {}
	int tax();
};

class Car : public Property
{
public:
	Car(int worth)
	{
		this->worth = worth;
	}
	int tax();
};

class CountryHouse : public Property
{
public:
	CountryHouse(int worth) : Property(worth) {}
	int tax();
};

