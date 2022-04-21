#pragma once
#include <iostream>;
class Property
{
public:
	int worth;
	Property(int worth)
	{
		this->worth = worth;
	}
	virtual int tax();

	~Property()
	{
		std::cout << "Desctuct.." << std::endl;
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

