#include "entity.h"

std::ostream& Entity::print(std::ostream& os) const { 
    os << this->display;
}
std::ostream& operator<<(std::ostream& os, const Entity& ent) {
    ent.print(os);
    return os;
}