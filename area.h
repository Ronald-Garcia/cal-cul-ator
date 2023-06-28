class Area {

    private: 
        int progress;

    public:

        Area(int current_progress) : progress(current_progress) { }

        virtual void handle() = 0;

        int get_progress() { return progress; }

        void increment() { progress++; }

};

class Plains : public Area {

    private:
        const int SIZE = 500;

    public:

        Plains() : Area(0) { }

        Plains(int cur_progress) : Area(cur_progress) { }

        void handle();

        void just_entered();
        
        void step();

        bool is_done() { return get_progress() >= SIZE; }

};
