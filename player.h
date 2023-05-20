#include <string>
#include <vector>
#include <cmath>

#include "entity.h"
#include "inventory.h"

class Player : public Entity {

    private:

        std::string name;
        Inventory inventory;


    public:

        Player() : Entity(), name("Unnamed") { }

        ~Player() { }

        int get_level() { return (int) log10(this->get_xp()); }

        void attack(Entity* other);

        void handle_attack(Entity* attacker);

};