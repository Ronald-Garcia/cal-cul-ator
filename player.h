#include <string>
#include <vector>
#include <cmath>

#include "inventory.h"
#include "entity.h"

class Player : public Entity {

    private:

        std::string name;
        Inventory inventory;


    public:


        int get_level() { return (int) log10(this->get_xp()); }

        void attack(Entity* other);

};