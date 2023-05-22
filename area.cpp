#include "area.h"

bool Area::step() { 

    if(progress == 0)
        just_entered();
    
    progress++;
}