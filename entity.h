#include <string>
#include <iostream>

class Entity {

    private:
        std::string display;
    public:

        Entity(std::string disp) : display(disp) { }

        virtual ~Entity() { }

        std::string get_display() const { return display; } 

        virtual std::ostream& print(std::ostream& os) const;

        friend std::ostream& operator<<(std::ostream& os, const Entity& ent);
};