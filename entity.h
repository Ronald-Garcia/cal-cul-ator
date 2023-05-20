
#include <string>
#include <iostream>

class Entity {

    private:
        std::string display;
    public:

        Entity(std::string disp) : display(disp) { }

        virtual ~Entity() { }

        friend std::ostream& operator<<(std::ostream& os, const Entity& ent);

};