#include <string>
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

        Player(double hp, double df, double atk, std::string display) 
            : Entity(display)
            , health(hp)
            , defense(df)
            , strength(atk)
            , xp(0) { }

        ~Player() { }

        double get_attack() { return strength; }

        void take_damage(double attack);

        bool game_over() { return health <= 0.00001; }
};