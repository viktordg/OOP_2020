#include "stdafx.h"
#include<iostream>
#include "Ticket.h"
#include "Person.h"
using namespace std;

Ticket createTicket(Person person)
{
	Ticket currentTicket;

	char startingPoint[128];
	cin.getline(startingPoint, 128);
	char destination[128];
	cin.getline(destination, 128);
	char date[128];
	cin.getline(date, 128);
	int price;
	cin >> price;
	int seatNumber;
	cin >> seatNumber;
	char seatClass[128];
	cin.getline(seatClass, 128);
	int travelTime;
	cin >> travelTime;

	currentTicket.set_startingPoint(startingPoint);
	currentTicket.set_Destination(destination);
	currentTicket.set_date(date);
	currentTicket.set_price(price);
	currentTicket.set_seatNumber(seatNumber);
	currentTicket.set_seatClass(seatClass);
	currentTicket.set_travelTime(travelTime);

	return currentTicket;
}
void printSameStartingPointsTickets(Ticket (&ticketArray)[2], char* startingPoint)
{
	for (Ticket ticket : ticketArray)
	{
		if (strcmp(ticket.get_startingPoint(), startingPoint) == 0)
		{
			ticket.print();
		}
	}
}
void printSameDestinationAndDateTickets(Ticket(&ticketArray)[2], char* destination, char* date)
{
	for (Ticket ticket : ticketArray)
	{
		if (strcmp(ticket.get_destination(), destination) == 0 && strcmp(ticket.get_date(), date) == 0)
		{
			ticket.print();
		}
	}
}
int allTicketsInADay(Ticket(&ticketArray)[2], char* date)
{
	int ticketCount = 0;
	for (Ticket ticket : ticketArray)
	{
		if (strcmp(ticket.get_date(), date) == 0)
		{
			ticketCount++;
		}
	}

	return ticketCount;
}
double averagePriceForAFlight(Ticket(&ticketArray)[2], char* startingPoint, char* destination)
{
	int ticketCount = 0;
	int sumPrice = 0;
	for (Ticket ticket : ticketArray)
	{
		if (strcmp(ticket.get_startingPoint(), startingPoint) == 0 && strcmp(ticket.get_destination(), destination) == 0)
		{
			ticketCount++;
			sumPrice += ticket.get_price();
		}
	}

	return sumPrice / ticketCount;
}
int childrenUnderTwelve(Ticket(&ticketArray)[2], char* personName)
{
	int count = 0;
	for (Ticket ticket : ticketArray)
	{
		if (strcmp(ticket.get_person().get_name(), personName) == 0)
		{
			if (ticket.get_person().get_age() < 12)
			{
				count++;
			}
		}
	}
	return count;
}
int countSamePplAndDayTickets(Ticket (&ticketArray)[2], char* name, char* date)
{
	int count = 0;
	for (Ticket ticket : ticketArray)
	{
		if (strcmp(ticket.get_person().get_name(), name) == 0 && strcmp(ticket.get_date(), date) == 0)
		{
			count++;
		}
	}
	return count;
}
int main()
{
	char name[] = "Pesho";
	char test[] = "test";
	char test2[] = "test2";
	char test3[] = "----";
	Person p1(name, 10, 10);

	Ticket t1;
	Ticket t2(test, test, test, 1, 1, test, 1, p1);

	Ticket ticketArray[2];
	ticketArray[0] = t1;
	ticketArray[1] = t2;

	printSameStartingPointsTickets(ticketArray, test3);

    return 0;
}

