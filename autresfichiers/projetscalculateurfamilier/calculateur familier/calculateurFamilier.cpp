#include "calculateurFamilier.h"

calculateurFamilier::calculateurFamilier(){
	std::cout << "Indiquer la valeur maximale du familier:" << std::endl;
	std::cin >> bonusMaxFamilier;
	std::cout << "Indiquer le nombre de monstres différents:" << std::endl;
	std::cin >> nombreDeMonstres;
	std::cout << "Indiquer le nombre de point gagner par palier de monstre tué: (+1/+10/+2...)" << std::endl;
	std::cin >> nombrePointParPalier;
	std::cout << std::endl;	
	this->saisieInfo();
	this->calculNombreDonjon();	
}

calculateurFamilier::~calculateurFamilier(){}


std::string calculateurFamilier::getNom(){
	std::string nom = "";
	std::cout << "Saisir le nom du monstre:" << std::endl;
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');	
	getline(std::cin,nom);
	return nom;
}
	
int calculateurFamilier::getNombreMonstresTuer(){
	int nombre = 0;
	std::cout << "indiquer le nombre de monstre tué par le familier:" << std::endl;
	std::cin >> nombre;
	return nombre;
}
	
int calculateurFamilier::getNombreMonstresParPalier(){
	int nombre;
	std::cout << "Saisir le nombre de monstre a tuer pour 1 palier:" << std::endl;
	std::cin >> nombre;
	return nombre;
}

void calculateurFamilier::getNombreMonstresSalle(monstre &monstreTemp){
	int i = 0, nombre = 0;
	for(i=0;i<5;i++){
		std::cout << "nombre de monstre dans la salle " << i+1 << std::endl;
		std::cin >> nombre;
		monstreTemp.nombreMonstreSalle[i] = nombre;
	}
}

void calculateurFamilier::saisieInfo(){
	int i = 0;	
	std::vector<monstre> tabSaisi;
	monstre monstreSaisi;
	for(i=0;i<nombreDeMonstres;i++){
		std::cout << "Monstre " << i+1 << ":" << std::endl;
		monstreSaisi.nomMonstre = getNom();	
		monstreSaisi.nombreMonstreParPalier = getNombreMonstresParPalier();
		monstreSaisi.nombreMonstreTuer = getNombreMonstresTuer();
		getNombreMonstresSalle(monstreSaisi);
		std::cout << std::endl;		
		tabSaisi.push_back(monstreSaisi);
	}	
	tabMonstre = tabSaisi;
}

void calculateurFamilier::calculNombreDonjon(){
	int bonusFamilier = 0;
	unsigned int i = 0,j = 0;
	int nombreDonjon = 0;
	while(bonusFamilier < bonusMaxFamilier){ // tq le fami n'as pas le maximum de point on continue d'incrémenter le compteur de monstre tué
		// pour chaque salle ( de 0 a 4 (5salles) on parcours les tableau des mosntres et on incrémente le compteur de monstre tué
		for(i=0;i<5;i++){
			for(j=0;j<tabMonstre.size();j++){
				tabMonstre[j].nombreMonstreTuer += tabMonstre[j].nombreMonstreSalle[i];				
			}
		}
		bonusFamilier = 0; // reinitialise le bonus a 0 ca la méthode utilisée recompte tout les bonus a chaque fois
		for(i=0;i<tabMonstre.size();i++){
			bonusFamilier += ((tabMonstre[i].nombreMonstreTuer/tabMonstre[i].nombreMonstreParPalier)*nombrePointParPalier);
		}
		nombreDonjon++;
		// affichage
		std::cout << std::endl << "Nombre de donjons: " << nombreDonjon << std::endl;
		std::cout << "Bonus du familier: " << bonusFamilier << std::endl;
		for(i=0;i<tabMonstre.size();i++){
			std::cout << "Nombre de " << tabMonstre[i].nomMonstre << " tué: " << tabMonstre[i].nombreMonstreTuer << std::endl;
		}		
	}
}
