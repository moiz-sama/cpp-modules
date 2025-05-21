#ifndef HUMANB_H
#define HUMANB_H

#include "Weapon.hpp"
#include <iostream>
#include <string>

class HumanB{
    private:
        Weapon      *used_weapon;
        std::string name;
    public:
        HumanB(std::string new_name);
        void attack(void);
        void setWeapon(Weapon &new_weapon);
};

#endif