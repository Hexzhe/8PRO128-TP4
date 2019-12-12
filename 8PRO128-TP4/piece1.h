// Fig. 10.1: piece1.h
// PieceWorker class derived from Employee
#ifndef PIECE1_H
#define PIECE1_H
#include "employ2.h"

class PieceWorker : public Employee {
public:
	PieceWorker(const char *, const char *, Date bd, double = 0.0, int = 0);
	void setWage(double);
	void setQuantity(int);
	virtual double earnings(Date) const;
	virtual void print() const;

private:
	double wagePerPiece; // wage for each piece output
	int quantity;        // output for week
};
#endif