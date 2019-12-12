// Fig. 10.1: boss1.h
// Boss class derived from Employee

#ifndef BOSS1_H
#define BOSS1_H
#include "employ2.h"
class Boss : public Employee {

public:
	Boss(const char *, const char *, Date bd, double = 0.0);
	void setWeeklySalary(double);
	virtual double earnings(Date) const;
	virtual void print() const;

private:
	double weeklySalary;
};
#endif 