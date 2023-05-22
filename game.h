#include "player.h"
#include "area.h"
#include <map>

class Game {

    private:
        
        Player* player;
        Area* area;
        std::vector<Entity*> rendered_entities;
        std::vector<std::string> all_entities;
        
    public:
    
        Game(Player* player_data, Area* area_data);

        ~Game() { delete player; }

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