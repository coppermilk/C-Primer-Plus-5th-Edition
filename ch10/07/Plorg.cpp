#include "Plorg.h"
#include <string>

#pragma warning(disable: 4996)

void Plorg::setSatisfactionIndex(int satisfactionIndex) {
        this -> satisfactionIndex = satisfactionIndex;
}

char * Plorg::getName() {
        return name;
}

int Plorg::getSatisfactionIndex() {
        return satisfactionIndex;
}

Plorg::Plorg(const char * n, int satisfactionIndex) {
        strncpy(name, n, 19);
        name[19] = '\0';
        this -> satisfactionIndex = satisfactionIndex;
}
