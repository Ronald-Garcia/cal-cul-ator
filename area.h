class Area {

    private:
        int progress;
    public:

        Area() : progress(0) { }
        Area(int cur_pos) : progress(cur_pos) { }

        virtual void just_entered() const = 0;

        virtual bool step();

        virtual bool is_done();

};