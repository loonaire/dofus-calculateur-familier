#include <iostream>
#include <string>
#include <limits> //utilisé pour vider le buffer de cin
#include <vector>



struct monstre {
	std::string nomMonstre;
	int nombreMonstreParPalier;
	int nombreMonstreTuer;
	int nombreMonstreSalle[5]; //tableau, chaque case correspond a la quantité de mosntre dans la salle [i]
	};

class calculateurFamilier{
	private:			
		int bonusMaxFamilier;
		int nombrePointParPalier;
		int nombreDeMonstres;
		std::vector<monstre> tabMonstre;		
		std::string getNom();
		int getNombreMonstresParPalier();
		int getNombreMonstresTuer();		
		void getNombreMonstresSalle(monstre &monstreTemp);
		
	public:	
		calculateurFamilier();
		~calculateurFamilier();
		void saisieInfo();
		void calculNombreDonjon();		
	
	};
	
