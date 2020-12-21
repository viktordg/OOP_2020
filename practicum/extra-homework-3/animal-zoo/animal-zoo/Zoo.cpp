#include "stdafx.h"
#include "Zoo.h"


Zoo::Zoo()
{
	this->size = 0;
	this->capacity = 20;
	this->animals = new Animal[this->capacity];
	this->ticketPrice = 0;
}
Zoo::Zoo(int size, int capacity, const Animal* animals, int ticketPrice)
{
	this->size = size;
	this->capacity = capacity;

	this->animals = new Animal[this->capacity];
	for (size_t i = 0; i < size; i++)
	{
		this->animals[i] = animals[i];
	}
	this->ticketPrice = ticketPrice;
}
Zoo::Zoo(const Zoo &newZoo)
{
	this->copy(newZoo);
}
Zoo::~Zoo()
{
	this->erase();
}
Zoo& Zoo::operator=(const Zoo newZoo)
{
	this->erase();
	this->copy(newZoo);

	return *this;
}
int Zoo::get_size()
{
	return this->size;
}
int Zoo::get_capacity()
{
	return this->capacity;
}
const Animal* Zoo::get_animals() const
{
	return this->animals;
}
int Zoo::get_ticketPrice()
{
	return this->ticketPrice;
}
void Zoo::set_capacity(int capacity)
{
	this->capacity = capacity;
}
void Zoo::set_animals(Animal* animals, int size)
{
	if (size <= this->capacity)
	{
		for (size_t i = 0; i < size; i++)
		{
			this->animals[i] = animals[i];
		}
	}
	else
	{
		resize(this->size, this->capacity);
		for (size_t i = 0; i < size; i++)
		{
			this->animals[i] = animals[i];
		}
	}
}
void Zoo::set_ticketPrice(int ticketPrice)
{
	this->ticketPrice = ticketPrice;
}
void Zoo::add(Animal newAnimal)
{
	if (this->size < capacity)
	{
		this->animals[size] = newAnimal;
		this->size++;
	}
	else
	{
		this->resize(this->size, this->capacity);
	}
}