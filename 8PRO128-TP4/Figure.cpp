#include "Figure.h"

void Figure::afficher(std::ostream& os) const
{
	os << "Figure:" << std::endl;
	os << this->getEntete() << std::endl;
	os << "No instruction" << std::flush;
}

std::string Figure::getEntete()
{
	return "No header";
}

std::istream& operator>>(std::istream& is, Figure& figure)
{
	return is;
}

std::ostream& operator<<(std::ostream& os, const Figure& figure)
{
	figure.afficher(os);
	return os;
}
