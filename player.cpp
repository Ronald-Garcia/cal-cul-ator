#include "player.h"

void Player::take_damage(double attack) {
    health -= attack - defense;
}