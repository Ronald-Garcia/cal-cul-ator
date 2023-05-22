#include "game.h"

using std::cout;
using std::endl;
using std::cin;

Game::Game(Player* player_data, Area* area_data) { 
    player = player_data;
    area = area_data;
    all_entities.push_back("1");
    all_entities.push_back("2");
    all_entities.push_back("3");
    all_entities.push_back("4");
    all_entities.push_back("5");
    all_entities.push_back("6");
    all_entities.push_back("7");
    all_entities.push_back("8");
    all_entities.push_back("9");
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

// ASSUMPTION: player = nullptr
void Game::start() {

    while(!area->is_done()) {
        area->step();
    }






    intro_text();

    cout << "Choose your character!" << endl;
    for (int i = 0; i < (int) all_entities.size(); i++) {
        cout << "[" << i + 1 << "]" << " - ";
        if(Player::unlocked_entities[all_entities[i]] == true) {
            cout << all_entities[i] << endl;
        } else {
            cout << "LOCKED" << endl;
        }
    }

    int user;

    do {

        if ( !(cin >> user) || (user <= 0 || user > (int) all_entities.size())) {
            cout << "Invalid choice! Please choose one of the numbers shown above!" << endl;
            continue;
        }

        if(Player::unlocked_entities[all_entities[user - 1]] == false) {
            cout << "Invalid choice! Please choose an unlocked character.";
            continue;
        }

        break;

    } while (true);

    cout << "And your name?" << endl;

    std::string name;

    cin >> name;

    std::string choice = all_entities[user - 1];

    player = new Player(choice, name);

    cout << "----------------------------------------------\nLoading...\n----------------------------------------------" << endl;
    handle_plains();
}

void Game::handle_plains() {
    cout << "You stumble into some plains..." << endl;

    bool in_progress = true;

    while(in_progress) {

    }

}