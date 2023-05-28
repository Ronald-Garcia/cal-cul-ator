#include <iostream>
#include "area.h"

using std::cout;
using std::endl;

void Plains::handle() {

    if (get_progress() == 0) {
        just_entered();
    }
    while(get_progress() <= SIZE) {
        step();
    }
}

void Plains::just_entered() {
    cout << "You stumble into the plains..." << endl;
}

void Plains::step() { 
    
}
