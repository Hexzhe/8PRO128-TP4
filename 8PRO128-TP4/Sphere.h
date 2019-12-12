#pragma once
#include "Cercle.h"

class Sphere :
	public Cercle
{
public :
	Sphere();
	Sphere(double r);
	~Sphere() {};

	double diametre() const;
	double aire() const;
	double volume() const;

	virtual void afficher(std::ostream& os) const;
	static std::string getEntete();

	friend std::istream& operator>>(std::istream& is, Sphere& sphere);
	friend std::ostream& operator<<(std::ostream& os, const Sphere& sphere);
};
