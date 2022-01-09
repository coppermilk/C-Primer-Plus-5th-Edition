#include <iostream>

#include "classic.h"
#include "cstring"

#pragma warning(disable: 4996)

Classic::Classic() {
        label_name[0] = '\0';
}

Classic::Classic(const Classic& c) {
        label_name[0] = '\0';
}

Classic::Classic(const char* si,
        const char* s2,
        const char* l_name, int n, double x) : Cd(si, s2, n, x) {
        std::strncpy(label_name, l_name, 50 - 1);
        label_name[50 - 1] = '\0';
}

Classic& Classic::operator = (const Classic& c) {
        std::strncpy(label_name, c.label_name, 50 - 1);
        label_name[50 - 1] = '\0';
        return *this;

}

void Classic::Report() const {
        Cd::Report();
        std::cout << label_name << std::endl;
}

Cd::Cd(const char* per,
        const char* lab, int sel, double play) {
        strncpy(performers, per, 50 - 1);
        performers[50 - 1] = '\0';

        strncpy(label, lab, 20 - 1);
        label[20 - 1] = '\0';

        selections = sel;
        playtime = play;

}

Cd::Cd(const Cd& d) {
        strncpy(performers, d.performers, 50 - 1);
        performers[50 - 1] = '\0';

        strncpy(label, d.label, 20 - 1);
        label[20 - 1] = '\0';

        selections = d.selections;
        playtime = d.playtime;
}

Cd::Cd() {
        performers[0] = '\0';
        label[0] = '\0';
        selections = 0;
        playtime = 0;

}

Cd::~Cd() {}

void Cd::Report() const {
        std::cout << "Performers: " << performers << std::endl;
        std::cout << "Label: " << label << std::endl;
        std::cout << "Selections: " << selections << std::endl; // количество сборников
        std::cout << "Playtime: " << playtime << std::endl; // время воспроизведения в минутах
}

Cd& Cd::operator = (const Cd& d) {
        strncpy(performers, d.performers, 50 - 1);
        performers[50 - 1] = '\0';

        strncpy(label, d.label, 20 - 1);
        label[20 - 1] = '\0';

        selections = d.selections;
        playtime = d.playtime;

        return *this;
}
