#pragma once
#include <iostream>;

class Property
{
public:
	Property() 
	{
	}
	int worth;
	Property(int worth)
	{
		this->worth = worth;
	}
	virtual int tax();
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
	Apartment(int worth) : Property(worth)
	{
		this->worth = worth;
	}
	int tax();
};

class Car : public Property
{
public:
	Car(int worth) : Property(worth)
	{
		this->worth = worth;
	}
	int tax();
};

class CountryHouse : public Property
{
public:
	CountryHouse(int worth) : Property(worth)
	{
		this->worth = worth;
	}
	int tax();
};

