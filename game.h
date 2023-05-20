#include <vector>
#include <map>
#include <iostream>
#include "player.h"

enum class Area {PREGAME, PLAINS, FOREST, DESERT, SNOW, BEAR, BAT, SLIME, GHOST, ALIEN, CALC, SECRET};
class Game {

    private:
        
        Player player;
        Area area;
        std::vector<Entity*> rendered_entities;
        std::map<std::string, bool> unlocked_entities;
        std::vector<std::string> all_entities;
        
    public:
        Game() : area(Area::PREGAME), all_entities(), unlocked_entities() { 

            all_entities.push_back("1");
            all_entities.push_back("2");
            all_entities.push_back("3");
            all_entities.push_back("4");
            all_entities.push_back("5");
            all_entities.push_back("6");
            all_entities.push_back("7");
            all_entities.push_back("8");
            all_entities.push_back("9");

            unlocked_entities["1"] = true;
            unlocked_entities["2"] = true;
            unlocked_entities["3"] = true;
            unlocked_entities["4"] = true;
            unlocked_entities["5"] = false;
            unlocked_entities["6"] = false;
            unlocked_entities["7"] = false;
            unlocked_entities["8"] = false;
            unlocked_entities["9"] = false;
        }

        void handle_area();
        void start();
        void intro_text();
        void handle_plains();
        void handle_forest();
        void handle_desert();
        void handle_snow();
        void handle_bear();
        void handle_bat();
        void handle_slime();
        void handle_ghost();
        void handle_alien();
        void handle_calc();
        void handle_secret();
};