#include "game.h"

using std::cout;
using std::endl;
using std::cin;

/*void Game::handle_area() {

    switch (area) {

        case Area::PLAINS:
            handle_plains();
            break;
        case Area::FOREST:
            handle_forest();
            break;
        case Area::DESERT:
            handle_desert();
            break;

    }

}*/

void Game::start() {

    intro_text();

    cout << "Choose your character!" << endl;
    for (int i = 0; i < (int) all_entities.size(); i++) {
        cout << "[" << i << "]" << " - ";
        if(unlocked_entities[all_entities[i]] == true) {
            cout << all_entities[i] << endl;
        } else {
            cout << "LOCKED" << endl;
        }
    }

    int user;

    do {

        if ( !(cin >> user) ) {
            cout << "Invalid choice! Please choose one of the numbers shown above!";
            continue;
        }

        if(unlocked_entities[all_entities[user - 1]] == false) {
            cout << "Invalid choice! Please choose an unlocked character.";
            continue;
        }

        break;

    } while (true);

}

void Game::intro_text() {
    cout << "You're in 7th grade algebra, learning about numbers and such..." << endl;
    cout << "One night before an exam you studied a good amount, pretty good I would say, for a... a long time... " << endl << endl;
    cout << "\"Zzzzz... Zzzzz.... Zzzzz....." << endl << endl;
    cout << "... x = 4! Huh, what? Why am I a 4?? Oh no...\"" << endl << endl;
    cout << "----------------------------------------------" << endl << endl;
    cout << "Unfortunately, you find yourself stuck in the calculator you've been studying with!" << endl;
    cout << "Are you able to escape and complete the test you've been studying for? We shall see..." << endl;
    cout << "----------------------------------------------" << endl << endl;
}
