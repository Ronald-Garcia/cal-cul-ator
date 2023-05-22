#include <vector>
#include <cmath>

#include "entity.h"
#include "inventory.h"

class Player : public Entity {

    private:

        double health; 
        double defense;        
        double strength;       
        double xp;

        std::string name;
        Inventory inventory;

    public:

        Player() : Entity("N/A") { }

        Player(std::string display, std::string name) 
            : Entity(display)
            , health(100)
            , defense(0)
            , strength(0)
            , xp(0)
            , name(name) { }

        ~Player() { }

        double get_attack() { return strength; }

        void take_damage(double attack);

        bool game_over() { return health <= 0.00001; }

        virtual std::ostream& print(std::ostream& os) const;

};