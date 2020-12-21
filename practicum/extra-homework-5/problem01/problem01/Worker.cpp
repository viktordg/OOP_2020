#include "stdafx.h"
#include "Worker.h"
#include <cstring>


Worker::Worker()
{
	this->set_name("----");
	this->set_hourPay(0.0);
}
Worker::Worker(const char* name, double hourPay)
{
	this->set_name(name);
	this->set_hourPay(hourPay);
}
Worker::Worker(const Worker& other)
{
	this->set_name(other.name);
	this->set_hourPay(other.hourPay);
}
Worker& Worker::operator=(const Worker& other)
{
	if (this != &other)
	{
		this->set_name(other.name);
		this->set_hourPay(other.hourPay);
	}
	return *this;
}
Worker::~Worker()
{
	delete[] this->name;
}

void Worker::set_name(const char* name)
{
	delete[] this->name;
	this->name = new char[strlen(name) + 1];
	strcpy_s(this->name, strlen(name) + 1, name);
}
void Worker::set_hourPay(double hourPay)
{
	this->hourPay = hourPay;
}
