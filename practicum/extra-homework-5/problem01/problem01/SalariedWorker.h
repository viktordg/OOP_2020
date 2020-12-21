#pragma once
#include"Worker.h"
class SalariedWorker : public Worker
{
private:
	int hours;
	char* job;
public:
	SalariedWorker();
	SalariedWorker(const char* name, double hourPay, int hours, const char* job);
	SalariedWorker(const SalariedWorker& other);
	SalariedWorker& operator= (const SalariedWorker& other);
	~SalariedWorker();

	void set_hours(int hours);
	void set_job(const char* job);

	void getPaid() override;
};

