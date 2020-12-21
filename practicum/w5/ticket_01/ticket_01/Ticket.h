#pragma once
#include<iostream>
#include<string.h>
class Ticket
{
private:
	char* startingPoint;
	char* destination;
	char* date;
	int cost;
	int seatNumber;
	bool seatClass;
	int travelTime;

	int size;
	int capacity;

	void copy(const Ticket& newTicket)
	{
		this->size = newTicket.size;
		this->capacity = newTicket.capacity;

		this->startingPoint = new char(this->capacity);
		this->destination = new char(this->capacity);
		this->destination = new char(this->capacity);

		strcpy_s(this->startingPoint, strlen(newTicket.startingPoint), startingPoint);
		strcpy_s(this->destination, strlen(newTicket.destination), destination);
		strcpy_s(this->date, strlen(newTicket.date), date);
		this->cost = newTicket.cost;
		this->seatNumber = newTicket.seatNumber;
		this->seatClass = newTicket.seatClass;
		this->travelTime = newTicket.travelTime;
	}
	void erase()
	{
		delete[] this->startingPoint;
		delete[] this->destination;
		delete[] this->date;
	}
public:
	Ticket();
	Ticket(const char* startingPoint, const char* destination, const char* date, int cost, int seatNumber, bool seatClass, int travelTime);
	Ticket(const Ticket& newTicket);
	~Ticket();
	Ticket& operator= (const Ticket& other);
	const char* get_startingPoint() const;
	const char* get_destination() const;
	const char* get_date() const;
	int get_cost() const;
	int get_seatNumber() const;
	bool get_seatClass() const;
	int get_travelTime() const;
	void set_startingPoint(const char* startingPoint);
	void set_destination(const char* destination);
	void set_date(const char* date);
	void set_cost(int cost);
	void set_seatNumber(int seatNumber);
	void set_seatClass(bool seatClass);	
	void set_travelTime(int travelTime);
};

