#ifndef CALCULATEURFAMILIER_H
#define CALCULATEURFAMILIER_H

#include <iostream>
#include <string>
#include <vector>



struct monstre {
	std::string nomMonstre;
	int nombreMonstreParPalier;
	int nombreMonstreTuer;
	int nombreMonstreSalle[5]; //tableau de 5 cases, chaque case correspond a la quantité de mosntre dans la salle [i]
	};

class calculateurFamilier{
	private:			
		int bonusMaxFamilier;
		int nombrePointParPalier;		
		std::vector<monstre> tabMonstre;

	public:	
		calculateurFamilier(int bonusMax, int nbPointParPalier);
		~calculateurFamilier();		
		void addMonstre(std::string nom,int nbMonstreParPalier, int nbMonstreTuer, int nbMonstreParSalle[]);		
		void calculNombreDonjon();	// a passer en private	
	};
	
	
#endif
