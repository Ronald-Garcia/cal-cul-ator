#include <iostream>
#include "game.h"

using std::cout;
using std::cin;
using std::endl;

Game* load_game(std::string file_name);

int main(int argc, char* argv[] ) {

    if(argc > 2) {
        std::cerr << "[Main] Too many args! Usage: ./main [optional save file]" << endl;
        return 1;
    }

    cout << "Welcome to CAL-CUL-ATOR!" << endl;
    cout << "[1] - Play" << endl;
    cout << "[2] - Options" << endl;
    cout << "[3] - How to Play" << endl;
    cout << "[4] - Exit" << endl;

    int user;
    std::string file_name = "";

    if(argc == 2) {
        file_name = argv[argc - 1];
    }

    Game* game = load_game(file_name);
    
    if(!(cin >> user) || (user <= 0 || user > 5) ) {
        std::cerr << "[Menu] | Invalid option!" << endl;
        return 1;
    }
    switch(user) {
        
        case 1:
            game->start();
        break;
        case 2: 

        break;
        case 3: 

        break;
        case 4: 
            cout << "Exiting..." << endl;
            delete game;
            return 0;
        break;

    }

    delete game;

    return 0;
}

Game* load_game(std::string file_name) {
    if (file_name == "") {
        return new Game();
    } else {
        // TODO: create saving and loading function
        return new Game();
    }
}