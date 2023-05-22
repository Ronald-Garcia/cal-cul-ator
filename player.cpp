#include "player.h"

std::map<std::string, bool> Player::unlocked_entities {
    {"1", true},
    {"2", true},
    {"3", true},
    {"4", true},
    {"5", false},
    {"6", false},
    {"7", false},
    {"8", false},
    {"9", false}
};

Player::Player(std::string display, std::string name) 
    : Entity(display)
    , health(100)
    , defense(0)
    , strength(0)
    , xp(0)
    , name(name) { }

void Player::take_damage(double attack) {
    health -= attack - defense;
}

void Player::print(std::ostream& os) const {
    os << name << ": " << get_display();
}