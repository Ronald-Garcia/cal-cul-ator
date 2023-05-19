
#include <string>

class Entity {
    private:
        double health; 
        double defense;        
        double attack;       
        double xp;
        std::string display;

    public:

        Entity() { }

        virtual void attack(Entity* other);

        virtual void handle_attack(Entity* attacker);

        double get_hp() { return health; }

        double get_xp() { return xp; }

};