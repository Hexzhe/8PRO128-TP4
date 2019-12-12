#pragma once
#include "Triangle.h"

class TriangleEq :
	public Triangle
{
public:
	TriangleEq();
	TriangleEq(double c);
	~TriangleEq() {};

	double aire() const;
	double perimetre() const;
	double hauteur() const;

	virtual void afficher(std::ostream& os) const;
	static std::string getEntete();

	friend std::istream& operator>>(std::istream& is, TriangleEq& triangleEq);
	friend std::ostream& operator<<(std::ostream& os, const TriangleEq& triangleEq);
};
