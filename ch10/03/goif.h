#pragma once
class goif {
        private:
                char player_Name[64];
        int handicap;
        int nameValid = 0;
        public:
                goif(const char * name, int handicap);
        void setHandicap(int handicap);
        void getGolf();
};
