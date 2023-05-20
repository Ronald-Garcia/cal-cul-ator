#include "entity.h" 

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

        virtual void attack(Entity* other) const = 0;

        virtual void handle_attack(Entity* other) const = 0;



};