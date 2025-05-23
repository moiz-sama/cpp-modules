#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

void testDestructionOrder(){
	ScavTrap *bot = new ScavTrap("test");
	delete bot;
}

void logStats(ScavTrap &obj)
{
	std::cout << "____" + obj.getName() + " data___\n\n";
	std::cout << "hit points = " << obj.getHitPoints() << '\n';
	std::cout << "energy points = " << obj.getEnergypoints() << '\n';
	std::cout << "attack damage = " << obj.getAttackDamage() << '\n';
	std::cout << "__________________\n\n";
}

void TestLimit(){
	ScavTrap bot("frag");
	logStats(bot);
	bot.setEnergyPoints(0);
	std::cout << "bot energy is now = " << bot.getEnergypoints() << '\n';
	bot.attack("target bot");
	bot.beRepaired(10);
}

void generalTest(){
	ScavTrap robot("bit");

	logStats(robot);
	robot.attack("targetBot");
	std::cout << "energy points after attacking = " << robot.getEnergypoints() << '\n';
	robot.takeDamage(10);
	std::cout << "hit points after taking 10 points of damage = " <<robot.getHitPoints() << '\n';
	robot.guardGate();
}

int main()
{
	TestLimit();
	generalTest();
	testDestructionOrder();
    return 0;
}