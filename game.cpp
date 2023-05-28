#include "game.h"
#include "area.h"

using std::cout;
using std::endl;
using std::cin;

std::vector<std::string> Game::all_entities {
    "1", 
    "2", 
    "3", 
    "4", 
    "5", 
    "6", 
    "7",
    "8",
    "9"};

Game::Game(Player* player_data, Area* area_data) { 
    player = player_data;
    area = area_data;
}
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

    cout << "You're in 7th grade algebra, learning about numbers and such..." << endl;
    cout << "One night before an exam you studied a good amount, pretty good I would say, for a... a long time... " << endl << endl;
    cout << "\"Zzzzz... Zzzzz.... Zzzzz....." << endl << endl;
    cout << "... x = 4! Huh, what? Why am I a 4?? Oh no...\"" << endl << endl;
    cout << "----------------------------------------------" << endl << endl;
    cout << "Unfortunately, you find yourself stuck in the calculator you've been studying with!" << endl;
    cout << "Are you able to escape and complete the test you've been studying for? We shall see..." << endl;
    cout << "----------------------------------------------" << endl << endl;

    cout << "Choose your character!" << endl;
    for (int i = 0; i < (int) Game::all_entities.size(); i++) {
        cout << "[" << i + 1 << "]" << " - ";
        if(Player::unlocked_entities[Game::all_entities[i]] == true) {
            cout << Game::all_entities[i] << endl;
        } else {
            cout << "LOCKED" << endl;
        }
    }

    int user;

    do {

        if ( !(cin >> user) || (user <= 0 || user > (int) Game::all_entities.size())) {
            cout << "Invalid choice! Please choose one of the numbers shown above!" << endl;
            continue;
        }

        if(Player::unlocked_entities[Game::all_entities[user - 1]] == false) {
            cout << "Invalid choice! Please choose an unlocked character.";
            continue;
        }

        break;

    } while (true);

    cout << "And your name?" << endl;

    std::string name;

    cin >> name;

    std::string choice = Game::all_entities[user - 1];

    player = new Player(choice, name);
    area = new Plains();
    cout << "----------------------------------------------\nLoading...\n----------------------------------------------" << endl;
}

void Game::handle_plains() {
    cout << "You stumble into some plains..." << endl;

    bool in_progress = true;

    while(in_progress) {

    }

}