#pragma once
#include<iostream>
#include "Person.h"

class Ticket
{
private:
	char startingPoint[128];
	char destination[128];
	char date[128];
	int price;
	int seatNumber;
	char seatClass[128];
	int travelTime;
	Person person;
public:
	Ticket();
	Ticket(char* startingPoint, char* destination, char* date, int price, int seatNumber, char* seatClass, int travelTime, Person person);
	char* get_startingPoint();
	char* get_destination();
	char* get_date();
	int get_price() const;
	int get_seatNumber() const;
	char* get_seatClass();
	int get_travelTime() const;
	Person get_person() const;
	void set_startingPoint(char* startingPoint);
	void set_Destination(char* destination);
	void set_date(char* date);
	void set_price(int price);
	void set_seatNumber(int seatNumber);
	void set_seatClass(char* newSeatClass);
	void set_travelTime(int travelTime);
	void set_person(Person person);
	void changeDate(char* newDate, int newPrice, char* newSeatClass);
	void print();
};

