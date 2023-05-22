#include "area.h"

class Plains : public Area {

    private:
        int progress;

    public:

        Plains() : Area() { }

        Plains(int cur_progress) : Area(cur_progress) { }

        void just_entered();
        
        void handle();

};