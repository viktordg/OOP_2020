#include "stdafx.h"
#include "Ticket.h"
#include<iostream>

Ticket::Ticket()
{
	this->size = 40;
	this->capacity = 100;

	this->startingPoint = new char(this->capacity);
	this->destination = new char(this->capacity);
	this->destination = new char(this->capacity);

	char temp[] = "----";
	strcpy_s(this->startingPoint, strlen(temp), temp);
	strcpy_s(this->destination, strlen(temp), temp);
	strcpy_s(this->date, strlen(temp), temp);
	this->cost = 0;
	this->seatNumber = 0;
	this->seatClass = false;
	this->travelTime = 0;	
}
Ticket::Ticket(const char* startingPoint, const char* destination, const char* date, int cost, int seatNumber, bool seatClass, int travelTime)
{
	this->size = 40;
	this->capacity = 100;

	this->startingPoint = new char(this->capacity);
	this->destination = new char(this->capacity);
	this->destination = new char(this->capacity);

	strcpy_s(this->startingPoint, strlen(startingPoint), startingPoint);
	strcpy_s(this->destination, strlen(destination), destination);
	strcpy_s(this->date, strlen(date), date);
	this->cost = cost;
	this->seatNumber = seatNumber;
	this->seatClass = seatClass;
	this->travelTime = travelTime;
}
Ticket::Ticket(const Ticket& newTicket)
{
	this->copy(newTicket);
}
Ticket::~Ticket()
{
	this->erase();
}
Ticket& Ticket::operator=(const Ticket& newTicket)
{
	if (this != &newTicket)
	{
		this->erase();
		this->copy(newTicket);
	}

	return *this;
}
const char* Ticket::get_startingPoint() const
{
	return this->startingPoint;
}
const char* Ticket::get_destination() const
{
	return this->destination;
}
const char* Ticket::get_date() const
{
	return this->date;
}
int Ticket::get_cost() const
{
	return this->cost;
}
int Ticket::get_seatNumber() const
{
	return this->seatNumber;
}
bool Ticket::get_seatClass() const
{
	return this->seatClass;
}
int Ticket::get_travelTime() const
{
	return this->travelTime;
}
void Ticket::set_startingPoint(const char* startingPoint)
{
	delete[] this->startingPoint;
	this->startingPoint = new char[strlen(startingPoint) + 1];
	strcpy_s(this->startingPoint, strlen(startingPoint) + 1, startingPoint);
}
void Ticket::set_destination(const char* destination)
{
	delete[] this->destination;
	this->startingPoint = new char[strlen(destination) + 1];
	strcpy_s(this->startingPoint, strlen(destination) + 1, destination);
}
void Ticket::set_date(const char* date)
{
	delete[] this->date;
	this->date = new char[strlen(date) + 1];
	strcpy_s(this->date, strlen(date) + 1, date);
}
void Ticket::set_cost(int cost)
{
	this->cost = cost;
}
void Ticket::set_seatNumber(int seatNumber)
{
	this->seatClass = seatNumber;
}
void Ticket::set_seatClass(bool seatClass)
{
	this->seatClass = seatClass;
}
void Ticket::set_travelTime(int travelTime)
{
	this->travelTime = travelTime;
}