#include "stdafx.h"
#include "Ticket.h"
using namespace std;

Ticket::Ticket()
{
	strcpy_s(this->startingPoint, "----");
	strcpy_s(this->destination, "----");
	strcpy_s(this->date, "----");
	this->price = 0;
	this->seatNumber = 0;
	strcpy_s(this->seatClass, "----");
	this->travelTime = 0;
	this->person = person;
}

Ticket::Ticket(char* startingPoint, char* destination, char* date, int price, int seatNumber, char* seatClass, int travelTime, Person person)
{
	strcpy_s(this->startingPoint, startingPoint);
	strcpy_s(this->destination, destination);
	strcpy_s(this->date, date);
	this->price = price;
	this->seatNumber = seatNumber;
	strcpy_s(this->seatClass, seatClass);
	this->travelTime = travelTime;
	this->person = person;
}

char* Ticket::get_startingPoint()
{
	return this->startingPoint;
}

char* Ticket::get_destination()
{
	return this->destination;
}

char* Ticket::get_date()
{
	return this->date;
}

int Ticket::get_price() const
{
	return this->price;
}

int Ticket::get_seatNumber() const
{
	return this->seatNumber;
}

char* Ticket::get_seatClass()
{
	return this->seatClass;
}

int Ticket::get_travelTime() const
{
	return this->travelTime;
}

Person Ticket::get_person() const
{
	return this->person;
}

void Ticket::set_startingPoint(char* startingPoint)
{
	strcpy_s(this->startingPoint, startingPoint);
}

void Ticket::set_Destination(char* destination)
{
	strcpy_s(this->destination, destination);
}

void Ticket::set_date(char* date)
{
	strcpy_s(this->date, date);
}

void Ticket::set_price(int price)
{
	this->price = price;
}

void Ticket::set_seatNumber(int seatNumber)
{
	this->seatNumber = seatNumber;
}

void Ticket::set_seatClass(char* seatClass)
{
	if (strcmp(seatClass, "business") || strcmp(seatClass, "economy"))
	{
		strcpy_s(this->seatClass, "Error!");
	}
	else
	{
		strcpy_s(this->seatClass, seatClass);
	}
}

void Ticket::set_travelTime(int travelTime)
{
	this->travelTime = travelTime;
}

void Ticket::set_person(Person person)
{
	this->person = person;
}

void Ticket::changeDate(char* newDate, int newPrice, char* newSeatClass)
{
	set_date(newDate);
	set_price(newPrice);
	set_seatClass(newSeatClass);
}

void Ticket::print()
{
	cout << "Ticket: " << endl;
	cout << "Starting point - " << this->startingPoint << endl;
	cout << "Destination - " << this->destination << endl;
	cout << "Date - " << this->date << endl;
	cout << "Price - " << this->price << endl;
	cout << "Seat number - " << this->seatNumber << endl;
	cout << "Seat class - " << this->seatClass << endl;
	cout << "Travel time - " << this->travelTime << endl;
}