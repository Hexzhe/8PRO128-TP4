#pragma once
#include "Moteur.h"

class Camion
{
public:
	Camion(std::string marque = "Honda", std::string modele = "Civic", int annee = 2020, std::string moteur = "WD-40");
	~Camion();

	std::string getModeleMoteur();
	std::string getMarque();
	std::string getModele();
	int getAnnee();

private:
	Moteur* moteur;
	std::string marque;
	std::string modele;
	int annee;
};
