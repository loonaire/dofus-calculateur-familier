#ifndef MONSTRE_HPP
#define MONSTRE_HPP

#include <string>
#include <iostream>
#include <vector>
#include <limits>

class Monstre
{	
	private:
		/* add your private declarations */
		std::string nomMonstre;
		int nbMonstrePalier;
		int nbMonstreTuer;
		std::vector<int> nbMonstreSalle; //tableau de 5 cases, chaque case correspond a la quantité de monstre dans la salle [i]
		
    	public:
		Monstre();
		Monstre(Monstre const& monstre);
		Monstre(std::string nomMonstre ,int nbMonstrePalier , int nbMonstreTuer );
		Monstre(std::string nomMonstre ,int nbMonstrePalier ,int nbMonstreTuer, std::vector<int> tabMonstre);
		~Monstre();
		std::string getNomMonstre() const;
		void setNomMonstre(std::string const nom);
		int getNbMonstrePalier() const;
		void setNbMonstrePalier(int const nbMonstrePalier);
		int getNbMonstreTuer() const;
		void setNbMonstreTuer(int const nbMonstreTuer);
		std::vector<int> getNbMonstreSalle() const;
		void setNbMonstreSalle(std::vector<int> const& tab);
		void setEltNbMonstreSalle(int const valeur, int const pos);
		friend std::ostream& operator << (std::ostream& sortie, Monstre const& monstre);
		friend std::istream& operator >> (std::istream& entree, Monstre& monstre);	

		void ajouteUnDonjon();
};

#endif /* MONSTRE_HPP */ 
