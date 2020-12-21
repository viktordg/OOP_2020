#pragma once
class Worker
{
protected:
	char* name;
	double hourPay;
public:
	Worker();
	Worker(const char* name, double hourPay);
	Worker(const Worker& other);
	Worker& operator=(const Worker& other);
	~Worker();


	void set_name(const char* name);
	void set_hourPay(double hourPay);

	virtual void getPaid() = 0;
};

