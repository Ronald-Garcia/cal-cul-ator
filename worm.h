#include "enemy.h"

class Worm : public Enemy {

    private:

    public:

        Worm() : Enemy(5, 0, 2, 1, "1") { }
        Worm(int level) : Enemy(5 * level, 0, 2 * level, 1 * exp2(level), "1") { };

        void attack(Player& victim);

        void take_damage(Player& attacker);

};