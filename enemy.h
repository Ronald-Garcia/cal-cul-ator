#include "player.h"

class Enemy : public Entity {

    private:
        double health; 
        double defense;        
        double strength;       
        double xp;

    public:
        
        Enemy(double hp, double df, double atk, double xp, std::string display) 
            : Entity(display)
            , health(hp)
            , defense(df)
            , strength(atk)
            , xp(xp) { }


        double get_attack() const { return strength; }

        void adjust_health(double adjustment) { health += adjustment; }

        bool is_dead() const { return health <= 0.00001; }

        virtual std::ostream& print(std::ostream& os) const;

        virtual void attack(Player& victim) const = 0;

        virtual void take_damage(Player& attacker);
};