#include "worm.h"
#include <iostream>

void Worm::attack(Player& victim) {
    victim.take_damage(this->get_attack());
}

void Worm::take_damage(Player& attacker) {
    adjust_health(-attacker.get_attack());
}

void Worm::print(std::ostream& os) const { 
    os << "1";
}