#include <iostream>

#include "classic.h"
#include "cstring"

#pragma warning(disable: 4996)

Classic::Classic() {
        std::cout << this << " Classic::Classic()" << std::endl;
        label_name = nullptr;
        
}

Classic::Classic(const Classic& c) : Cd(c) {
        std::cout << this << " Classic::Classic(const Classic& c) : Cd(c)" << std::endl;
        if (c.label_name == nullptr) {
                label_name = nullptr;
        }
        else {
                label_name = new char[strlen(c.label_name) + 1];
                strcpy(label_name, c.label_name);
        }
}

Classic::Classic(const char* si,
        const char* s2,
        const char* l_name, int n, double x) : Cd(si, s2, n, x) {
        std::cout << this << " Classic::Classic(const char* si,const char* s2,const char* l_name, int n, double x) : Cd(si, s2, n, x)" << std::endl;
        //std::strncpy(label_name, l_name, 50 - 1);
        //label_name[50 - 1] = '\0';
        if (l_name == nullptr) {
                label_name == nullptr;
        }
        else {
                label_name = new char[strlen(l_name) + 1];
                strcpy(label_name, l_name);
        }
        
}

Classic::~Classic()
{
        std::cout << this << " Classic::~Classic()" << std::endl;
        delete[] label_name;
}

Classic& Classic::operator = (const Classic& c) {
        std::cout << "Classic& Classic::operator = (const Classic& c)" << std::endl;
        //std::strncpy(label_name, c.label_name, 50 - 1);
        //label_name[50 - 1] = '\0';
        if (this == &c) {
                return *this;
        }
        else {
                Cd::operator=(c);
                delete[] label_name;
                if (c.label_name == nullptr) {
                        label_name = nullptr;
                }
                else {
                        label_name = new char[strlen(c.label_name) + 1];
                        strcpy(label_name, c.label_name);
                }    
        }
        return *this;
}

void Classic::Report() const {
        Cd::Report();
        std::cout << label_name << std::endl;
}

Cd::Cd(const char* per,
        const char* lab, int sel, double play) {
        std::cout << this << "Cd::Cd(const char* per, const char* lab, int sel, double play)" << std::endl;
        if (per == nullptr) {
                performers = nullptr;
        }
        else {
                performers = new char[strlen(per) + 1];
                strcpy(performers, per);
        }

        //for (int i = 0; i < strlen(d.performers) + 1; i++) {
        //        performers[i] = d.performers[i];
        //}

        //strncpy(label, d.label, 20 - 1);
        //label[20 - 1] = '\0';
        if (lab == nullptr) {
                label == nullptr;
        }
        else {
                label = new char[strlen(lab) + 1];
                strcpy(label, lab);
        }

        selections = sel;
        playtime = play;

}

Cd::Cd(const Cd& d) {
        std::cout << this << "Cd::Cd(const Cd& d)" << std::endl;
        if (d.performers == nullptr) {
                performers = nullptr;
        }
        else {
                performers = new char[strlen(d.performers) + 1];
                strcpy(performers, d.performers);
        }

        //for (int i = 0; i < strlen(d.performers) + 1; i++) {
        //        performers[i] = d.performers[i];
        //}

        //strncpy(label, d.label, 20 - 1);
        //label[20 - 1] = '\0';
        if (d.label == nullptr) {
                label == nullptr;
        }
        else {
                label = new char[strlen(d.label) + 1];
                strcpy(label, d.label);
        }
        selections = d.selections;
        playtime = d.playtime;
}

Cd::Cd() {
        std::cout << this << "Cd::Cd()" << std::endl;
        performers = nullptr;
        label = nullptr;
        selections = 0;
        playtime = 0;

}

Cd::~Cd() {
        std::cout << this << " Cd::~Cd()" << std::endl;
        delete[] label;
        delete[] performers;
}

void Cd::Report() const {
        std::cout << "Performers: " << performers << std::endl;
        std::cout << "Label: " << label << std::endl;
        std::cout << "Selections: " << selections << std::endl; // êîëè÷åñòâî ñáîðíèêîâ
        std::cout << "Playtime: " << playtime << std::endl; // âðåìÿ âîñïðîèçâåäåíèÿ â ìèíóòàõ
}

Cd& Cd::operator = (const Cd& d) {

        if (this == &d) {
                return *this;
        }
        else {
                //strncpy(performers, d.performers, 50 - 1);
        //performers[50 - 1] = '\0';
                delete[] performers;
                delete[] label;
                if (d.performers == nullptr) {
                        performers = nullptr;
                }
                else {
                        performers = new char[strlen(d.performers) + 1];
                        strcpy(performers, d.performers);
                }
                
                //for (int i = 0; i < strlen(d.performers) + 1; i++) {
                //        performers[i] = d.performers[i];
                //}

                //strncpy(label, d.label, 20 - 1);
                //label[20 - 1] = '\0';
                if (d.label == nullptr) {
                        label == nullptr;
                }
                else {
                        label = new char[strlen(d.label) + 1];
                        strcpy(label, d.label);
                }
           
                //for (int i = 0; i < strlen(d.label) + 1; i++) {
                //        label[i] = d.label[i];
                //}
        }

        selections = d.selections;
        playtime = d.playtime;

        return *this;
}
