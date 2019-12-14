#include "Camion.h"

Camion::Camion(std::string marque, std::string modele, int annee, std::string moteur)
{
	this->marque = marque;
	this->modele = modele;
	this->annee = annee;
	this->moteur = new Moteur(moteur);
}

Camion::~Camion()
{
	delete this->moteur;
}

std::string Camion::getModeleMoteur()
{
	return this->moteur->getModele();
}

std::string Camion::getMarque()
{
	return this->marque;
}

std::string Camion::getModele()
{
	return this->modele;
}

int Camion::getAnnee()
{
	return this->annee;
}
