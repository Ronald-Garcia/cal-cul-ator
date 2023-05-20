
#include <string>
#include <iostream>

class Entity {

    protected:
        Entity(std::string disp) : display(disp) { }

    private:
        std::string display;
    public:

        virtual ~Entity() { }

        friend std::ostream& operator<<(std::ostream& os, const Entity& ent);

};