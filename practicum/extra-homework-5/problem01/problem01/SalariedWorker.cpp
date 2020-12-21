#include "stdafx.h"
#include "SalariedWorker.h"
#include<cstring>
#include<iostream>


SalariedWorker::SalariedWorker() : Worker()
{
	this->set_hours(0);
	this->set_job("----");
}
SalariedWorker::SalariedWorker(const char* name, double hourPay, int hours, const char* job) : Worker(name, hourPay)
{
	this->set_hours(hours);
	this->set_job(job);
}
SalariedWorker::SalariedWorker(const SalariedWorker& other) : Worker(other)
{
	this->set_hours(other.hours);
	this->set_job(other.job);
}
SalariedWorker& SalariedWorker::operator= (const SalariedWorker& other)
{
	if (this != &other)
	{
		Worker::operator=(other);
		this->set_hours(other.hours);
		this->set_job(other.job);
	}
	return *this;
}
SalariedWorker::~SalariedWorker()
{
	delete[] this->job;
}

void SalariedWorker::set_hours(int hours)
{
	this->hours = hours;
}
void SalariedWorker::set_job(const char* job)
{
	delete[] this->job;
	this->job = new char[strlen(job) + 1];
	strcpy_s(this->job, strlen(job) + 1, job);
}

void SalariedWorker::getPaid()
{
	double salary = 0.0;
	salary = 40 * this->hourPay;
	std::cout << this->name << " who is working " << this->job << " got paid " << salary << "$ this week." << std::endl;
}
