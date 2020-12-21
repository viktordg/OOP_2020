#include "stdafx.h"
#include "HourlyWorker.h"
#include <cstring>
#include<iostream>


HourlyWorker::HourlyWorker() : Worker()
{
	this->set_hours(0);
	this->set_job("----");
}
HourlyWorker::HourlyWorker(const char* name, double hourPay, int hours, const char* job) : Worker(name, hourPay)
{
	this->set_hours(hours);
	this->set_job(job);
}
HourlyWorker::HourlyWorker(const HourlyWorker& other) : Worker(other)
{
	this->set_hours(other.hours);
	this->set_job(other.job);
}
HourlyWorker& HourlyWorker::operator=(const HourlyWorker& other) 
{
	if (this != &other)
	{
		Worker::operator=(other);
		this->set_hours(other.hours);
		this->set_job(other.job);
	}
	return *this;
}
HourlyWorker::~HourlyWorker()
{
	delete[] this->job;
}

void HourlyWorker::set_hours(int hours)
{
	this->hours = hours;
}
void HourlyWorker::set_job(const char* job)
{
	delete[] this->job;
	this->job = new char[strlen(job) + 1];
	strcpy_s(this->job, strlen(job) + 1, job);
}

void HourlyWorker::getPaid()
{
	double salary = 0.0;

	for (size_t i = 0; i < this->hours; i++)
	{
		if (i <= 40)
		{
			salary += this->hourPay;
		}
		else if (i > 40 && i <= 60)
		{
			salary += this->hourPay * 1.5;
		}
		else if (i > 60)
		{
			salary += this->hourPay * 2;
		}


		std::cout << this->name << " who is working " << this->job << " got paid " << salary << "$ this week." << std::endl;
	}
}
