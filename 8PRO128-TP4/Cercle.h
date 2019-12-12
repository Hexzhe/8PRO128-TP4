#pragma once
#include "Ellipse.h"

class Cercle :
	public Ellipse
{
public : 
	Cercle();
	Cercle(double r);
	~Cercle() {};

	double rayon;

	double aire() const;
	double perimetre() const;
	double diametre() const;

	virtual void afficher(std::ostream& os) const;
	static std::string getEntete();

	friend std::istream& operator>>(std::istream& is, Cercle& cercle);
	friend std::ostream& operator<<(std::ostream& os, const Cercle& cercle);
};
