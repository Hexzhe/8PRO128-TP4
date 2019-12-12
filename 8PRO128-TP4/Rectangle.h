#pragma once
#include "Figure.h"

class Rectangle :
	public Figure
{
public:
	Rectangle();
	Rectangle(double lrg, double lng);
	~Rectangle() {};

	double largeur;
	double longueur;

	double aire() const;
	double perimetre() const;
	double diagonale() const;

	virtual void afficher(std::ostream& os) const;
	static std::string getEntete();

	friend std::istream& operator>>(std::istream& is, Rectangle& rectangle);
	friend std::ostream& operator<<(std::ostream& os, const Rectangle& rectangle);
};
