
#include <string>

class Entity {
    private:
        double health; 
        double defense;        
        double strength;       
        double xp;
        std::string display;

    public:

        Entity() : health(0.0), defense(0.0), strength(0.0), xp(0.0), display("N/A") { }

        virtual ~Entity() { }

        virtual void attack(Entity* other) = 0;

        virtual void handle_attack(Entity* attacker) = 0;

        double get_hp() { return health; }

        double get_xp() { return xp; }

};