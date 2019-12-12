// Fig. 10.1: commis1.cpp
// Member function definitions for class CommissionWorker

#include "commis1.h"

// Constructor for class CommissionWorker
CommissionWorker::CommissionWorker(const char *first, const char *last, Date bd, double s, double c, int q) : Employee(first, last, bd)  // call base-class constructor
{
	setSalary(s);
	setCommission(c);
	setQuantity(q);
}

// Set CommissionWorker's weekly base salary
void CommissionWorker::setSalary(double s)
{
	salary = s > 0 ? s : 0;
}

// Set CommissionWorker's commission
void CommissionWorker::setCommission(double c)
{
	commission = c > 0 ? c : 0;
}

// Set CommissionWorker's quantity sold
void CommissionWorker::setQuantity(int q)
{
	quantity = q > 0 ? q : 0;
}

// Determine CommissionWorker's earnings
double CommissionWorker::earnings(Date d) const
{
	return (salary + commission * quantity) + (d.isSameMonth(birthDate) ? 100 : 0);
}

// Print the CommissionWorker's name 
void CommissionWorker::print() const
{
	std::cout << "  Commission worker: ";
	Employee::print();
}