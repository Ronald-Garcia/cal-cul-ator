#include "player.h"
#include "area.h"
#include <map>

class Game {

    private:
        
        Player* player;
        Area* area;
        std::vector<Entity*> rendered_entities;
        
    public:

        static std::vector<std::string> all_entities;
    
        Game(Player* player_data, Area* area_data);

        ~Game() { delete player; }

        void set_player(Player* player) { this->player = player; }

        void handle_area();
        void start();
        void intro_text();
};