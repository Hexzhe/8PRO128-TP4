#include "Moteur.h"

std::string Moteur::getModele()
{
	return this->modele;
}

Moteur::Moteur(std::string m)
{
	this->modele = m;
}

Moteur::~Moteur()
{
}
