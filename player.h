#include <vector>
#include <map>
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

        static std::map<std::string, bool> unlocked_entities;

        Player(std::string display, std::string name);

        ~Player() { }

        double get_attack() { return strength; }

        void take_damage(double attack);

        bool game_over() { return health <= 0.00001; }

        virtual void print(std::ostream& os) const;

};