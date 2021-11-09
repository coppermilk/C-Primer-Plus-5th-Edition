#pragma once
class Plorg {
        private:
                enum {
                        LIMIT = 20
                };
        char name[LIMIT];
        int satisfactionIndex;

        public:
                Plorg(const char * n = "Pragma", int satisfactionIndex = 50);
        //Plorg();
        void setSatisfactionIndex(int satisfactionIndex);

        char * getName();
        int getSatisfactionIndex();
};
