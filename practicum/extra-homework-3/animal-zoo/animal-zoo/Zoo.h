#pragma once
#include<iostream>
#include "Animal.h"

class Zoo
{
private:
	int size;
	int capacity;
	Animal* animals;
	int ticketPrice;
	void copy(const Zoo &newZoo)
	{		
		this->size = newZoo.size;
		this->capacity = newZoo.capacity;
		this->animals = new Animal[newZoo.capacity];
		for (size_t i = 0; i < newZoo.size; i++)
		{
			this->animals[i] = newZoo.animals[i];
		}
		this->ticketPrice = newZoo.ticketPrice;
	}
	void erase()
	{
		delete[] this->animals;
	}
	void resize(int size, int capacity)
	{
		Animal* buffer = new Animal[capacity * 2];
		for (size_t i = 0; i < size; i++)
		{
			buffer[i] = this->animals[i];
		}
		this->erase();
		this->animals = buffer;
		/*this->animals = new Animal[capacity * 2];
		for (size_t i = 0; i < size; i++)
		{
			this->animals[i] = buffer[i];
		}
		delete[] buffer;*/
	}
public:
	Zoo();
	Zoo(int size, int capacity, const Animal* animals, int ticketPrice);
	Zoo(const Zoo &other);
	~Zoo();
	Zoo& operator = (const Zoo newZoo);
	int get_size();
	int get_capacity();
	const Animal* get_animals() const;
	int get_ticketPrice();
	void set_capacity(int capacity);
	void set_animals(Animal* animals, int size);
	void set_ticketPrice(int ticketPrice);
	void add(Animal newAnimal);
};

