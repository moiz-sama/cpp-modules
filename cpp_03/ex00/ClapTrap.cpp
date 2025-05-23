#include "ClapTrap.hpp"

ClapTrap::ClapTrap (){
    std::cout << "ClapTrap default constructor called\n";
    name = "unnamed";
    hitPoints = 10;
    energyPoints = 10;
    attackDamage = 0;
}

ClapTrap::ClapTrap(std::string initName)
{
	std::cout << "ClapTrap constructor called\n";
	name = initName;
	attackDamage = 0;
	hitPoints = 10;
	energyPoints = 10;
}

ClapTrap::ClapTrap(const ClapTrap &dest)
{
	std::cout << "ClapTrap copy constructor called\n";
	name = dest.name;
	attackDamage = dest.attackDamage;
	hitPoints = dest.hitPoints;
	energyPoints = dest.energyPoints;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &source)
{
	std::cout << "ClapTrap copy assignment operator called\n";
	name = source.name;
	attackDamage = source.attackDamage;
	hitPoints = source.hitPoints;
	energyPoints = source.energyPoints;
	return *this;
}

void ClapTrap::attack(const std::string& target)
{
	if (energyPoints <= 0){
		std::cout << "ClapTrap " + name + " can't attack (insefisent energy points)\n";
		return ;
	}
	else if (hitPoints <= 0){
		std::cout << "ClapTrap " + name + " can't attack (insefisent hit points)\n";
		return;
	}
	energyPoints -= 1;
	std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!\n";
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (energyPoints <= 0){
		std::cout << "ClapTrap " + name + " can't take damage (insefisent energy points)\n";
		return ;
	}
	else if (hitPoints <= 0){
		std::cout << "ClapTrap " + name + " can't take damage (insefisent hit points)\n";
		return;
	}
	hitPoints -= amount;
	std::cout << "ClapTrap " << name << " got attacked causing " << amount << " decreased hit points\n";
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (energyPoints <= 0){
		std::cout << "ClapTrap " + name + " can't be repaired (insefisent energy points)\n";
		return ;
	}
	else if (hitPoints <= 0){
		std::cout << "ClapTrap " + name + " can't be repaired (insefisent hit points)\n";
		return;
	}
	energyPoints -= 1;
	hitPoints += amount;
	std::cout << "ClapTrap " + name + " got repaired by " << amount << " hit points\n";
}

void ClapTrap::setName(std::string newName){
	name = newName;
}

void ClapTrap::setAttackDamage(int newValue){
	attackDamage = newValue;
}

void ClapTrap::setEnergyPoints(int newValue){
	energyPoints = newValue;
}

void ClapTrap::setHitPoints(int newValue){
	hitPoints = newValue;
}

int ClapTrap::getHitPoints(){return hitPoints;}
int ClapTrap::getEnergypoints(){return energyPoints;}
int ClapTrap::getAttackDamage(){return attackDamage;}
std::string ClapTrap::getName(){return name;}

ClapTrap::~ClapTrap(){
	std::cout << "ClapTrap " + name + " destructor called\n";
}