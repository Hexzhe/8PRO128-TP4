#pragma once
#include "Carre.h"

class Cube :
	public Carre
{
public:
	Cube();
	Cube(double c);
	~Cube() {};

	double aire() const;
	double face() const;
	double volume() const;

	virtual void afficher(std::ostream& os) const;
	static std::string getEntete();

	friend std::istream& operator>>(std::istream& is, Cube& cube);
	friend std::ostream& operator<<(std::ostream& os, const Cube& cube);
};
