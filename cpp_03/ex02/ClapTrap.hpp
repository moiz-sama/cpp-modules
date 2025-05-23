#ifndef ClapTrap_HPP
# define ClapTrap_HPP

#include <iostream>

class ClapTrap
{
	protected:
		std::string name;
		int hitPoints;
		int energyPoints;
		int attackDamage;
	
	public:
		ClapTrap();
        ClapTrap(std::string initName);
        ClapTrap(const ClapTrap &source);
        ClapTrap& operator=(const ClapTrap &source);
        void setName(std::string newName);
		void setAttackDamage(int newValue);
		void setEnergyPoints(int newValue);
		void setHitPoints(int newValue);
        std::string getName();
        int getHitPoints();
		int getEnergypoints();
		int getAttackDamage();
        void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		~ClapTrap();
};

#endif