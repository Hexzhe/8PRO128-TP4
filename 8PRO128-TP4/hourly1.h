// Fig. 10.1: hourly1.h
// Definition of class HourlyWorker
#ifndef HOURLY1_H
#define HOURLY1_H
#include "employ2.h"
class HourlyWorker : public Employee {
public:
	HourlyWorker(const char *, const char *, Date bd,
		double = 0.0, double = 0.0);
	void setWage(double);
	void setHours(double);
	virtual double earnings(Date) const;
	virtual void print() const;
private:
	double wage;   // wage per hour
	double hours;  // hours worked for week
};
#endif
 