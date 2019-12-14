/*************************************************************************
* Titre:       Travail pratique #4 (https://github.com/Hexzhe/8PRO128-TP4)
* Auteur(e)s:  Dominique Boivin (BOID31609701)
*              Jason Gilbert (GILJ05069703)
* Date:        2019-12-16
* Description: Petit programme d'affichage en trois parties selon le
			   document TP4.docx.
			   L'ensemble du TP de base sur le code du travail 
			   précédent (TP3).
			   Partie 1: Implémentation d'une gestion des exceptions 
			   (deux types d'exceptions; std::exception et "...") 
			   dans les classes .
			   Partie 2: Traduction d'un diagramme UML en classes 
			   (Entreprise, Camion et Moteur).
			   Partie 3: Transformer la classe "Boss" en singleton
			   pour qu'elle ne puisse pas être instancié plus d'une fois.
**************************************************************************/

#include "piece1.h"
#include "hourly1.h"
#include "boss1.h"
#include "Entreprise.h"

int main()
{
	//Partie 1
	std::cout << "===== Partie 1 =====" << std::endl;
	std::cout << "Demonstrating exception handling for two classes:" << std::endl;

	std::cout << "PieceWorker:" << std::endl;
	PieceWorker* pw = new PieceWorker("John", "Doe", Date(11, 3, 1971), 1.5, 1);
	pw->fakeException();

	std::cout << std::endl;

	std::cout << "HourlyWorker:" << std::endl;
	HourlyWorker* hw = new HourlyWorker("John", "Doe", Date(11, 3, 1971), 1.5, 1);
	hw->fakeException();

	std::cout << std::endl;

	//Partie 2
	std::cout << "===== Partie 2 =====" << std::endl;

	Entreprise* e = new Entreprise();
	std::cout << "Creation d'une entreprise: " << e->getNom() << std::endl;
	std::cout << "  Nb de camion(s): " << e->countCamion() << std::endl;

	//Moteur* m = new Moteur(); //Impossible

	Camion* c = new Camion();
	std::cout << "Creation d'un camion: " << c->getMarque() << ", " << c->getModele() << ", " << c->getAnnee() << std::endl;

	e->addCamion(*c);
	std::cout << "Ajout du camion a l'entreprise:" << std::endl;
	std::cout << "  Nb de camion(s): " << e->countCamion() << std::endl;

	std::cout << std::endl;

	//Partie 3
	std::cout << "===== Partie 3 =====" << std::endl;

	std::cout << "Instanciation double d'un singleton:" << std::endl;
	
	Boss* b1 = Boss::getInstance();
	std::cout << "Instance 1: " << b1 << std::endl;

	Boss* b2 = Boss::getInstance();
	std::cout << "Instance 2: " << b2 << std::endl;

	std::cout << std::endl;

	delete pw, hw, e, c, b1, b2;
	return 0;
}