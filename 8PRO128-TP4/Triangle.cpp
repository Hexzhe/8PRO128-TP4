#include "Triangle.h"

Triangle::Triangle() : Figure()
{
	cote1 = 0.0;
	cote2 = 0.0;
	cote3 = 0.0;
}

Triangle::Triangle(double c1, double c2, double c3) : Figure()
{
	cote1 = c1;
	cote2 = c2;
	cote3 = c3;
}

double Triangle::aire() const
{
	double s = perimetre() / 2;
	return sqrt(s * (s - cote1) * (s - cote2) * (s - cote3));
}

double Triangle::perimetre() const
{
	return cote1 + cote2 + cote3;
}

double Triangle::hauteur(int cote) const
{
	if (cote <= 0 || cote > 3)
	{
		std::cout << "ERROR: Triangle::hauteur(int) param must be between 1-3" << std::endl;
		exit(1);
	}

	switch (cote)
	{
	case 1:
		return 2 * aire() / cote1;
	case 2:
		return 2 * aire() / cote2;
	case 3:
		return 2 * aire() / cote3;
	}

	return 0;
}

void Triangle::afficher(std::ostream& os) const
{
	os << "Triangle:" << std::endl;
	os << this->getEntete() << std::endl;
	os << std::setw(9) << std::setprecision(2) << std::fixed << this->cote1 << " ";
	os << std::setw(9) << std::setprecision(2) << std::fixed << this->cote2 << " ";
	os << std::setw(9) << std::setprecision(2) << std::fixed << this->cote3 << " ";
	os << std::setw(9) << std::setprecision(2) << std::fixed << this->aire() << " ";
	os << std::setw(9) << std::setprecision(2) << std::fixed << this->perimetre() << " ";
	os << std::setw(9) << std::setprecision(2) << std::fixed << this->hauteur(1);
}

std::string Triangle::getEntete()
{
	return "cote1     cote2     cote3     aire      perim     haut (b=cote1)";
}

std::istream& operator>>(std::istream& is, Triangle& triangle)
{
	is >> triangle.cote1 >> triangle.cote2 >> triangle.cote3;

	return is;
}

std::ostream& operator<<(std::ostream& os, const Triangle& triangle)
{
	triangle.afficher(os);
	return os;
}
