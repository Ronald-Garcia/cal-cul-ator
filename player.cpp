#include "player.h"

void Player::take_damage(double attack) {
    health -= attack - defense;
}

std::ostream& Player::print(std::ostream& os) const {
    os << name << ": " << get_display();
}