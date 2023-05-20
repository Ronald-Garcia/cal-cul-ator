#include "player.h"

void Player::attack(Entity* other) {
    other->handle_attack(this);
}

void Player::handle_attack(Entity* attacker) {
    
}