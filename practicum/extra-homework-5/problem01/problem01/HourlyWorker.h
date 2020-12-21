#pragma once
#include "Worker.h"
class HourlyWorker : public Worker
{
private:
	int hours;
	char* job;
public:
	HourlyWorker();
	HourlyWorker(const char* name, double hourPay, int hours, const char* job);
	HourlyWorker(const HourlyWorker& other);
	HourlyWorker& operator=(const HourlyWorker& other);
	~HourlyWorker();

	void set_hours(int hours);
	void set_job(const char* job);

	void getPaid() override;
};

