#pragma once
#include "Moteur.h"

class Camion
{
public:
	Camion(std::string marque, std::string modele, std::string moteur);
	~Camion();
private:
	Moteur* moteur;
	std::string marque;
	std::string modele;
};

