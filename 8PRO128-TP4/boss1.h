// Fig. 10.1: boss1.h
// Boss class derived from Employee

#ifndef BOSS1_H
#define BOSS1_H
#include "employ2.h"
class Boss : public Employee {

public:
	/* Static access method. */
	static Boss* getInstance(const char* first = "John", const char* last = "Doe", Date bd = Date(11, 3, 1971), double s = 100000);

	void setWeeklySalary(double);
	virtual double earnings(Date) const;
	virtual void print() const;

private:
	/* Here will be the instance stored. */
	static Boss* instance;

	/* Private constructor to prevent instancing. */
	Boss(const char* first, const char* last, Date bd, double s);

	double weeklySalary;
};
#endif 