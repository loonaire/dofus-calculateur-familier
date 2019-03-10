#ifndef CALCULATEURFAMILIER_HPP
#define CALCULATEURFAMILIER_HPP

#include "Monstre.hpp"
#include <vector>


class CalculateurFamilier {
	private:
		int bonusMaxFamilier;
		int nbPointParPalier;
		std::vector<Monstre> tabMonstre;		

	public:	
		CalculateurFamilier(int const& bonusMaxFamilier, int const& nbPointParPalier);
		~CalculateurFamilier();
		int getBonusMaxFamilier() const;
		void setBonusMaxFamilier(int const bonusMaxFamilier);
		int getNbPointParPalier() const;
		void setNbPointParPalier(int const nbPointParPalier);
		std::vector<Monstre> getTabMonstre() const;
		void setTabMonstre(std::vector<Monstre> const& tabMonstre);
		void ajoutMonstre(Monstre const& monstre);
		void calcul();			
};

#endif
