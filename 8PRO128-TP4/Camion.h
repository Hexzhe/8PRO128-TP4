#pragma once
#include "Moteur.h"

class Camion
{
public:
	Camion(std::string marque = "Ford", std::string modele = "F-150", int annee = 2020, std::string moteur = "WD-40");
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
