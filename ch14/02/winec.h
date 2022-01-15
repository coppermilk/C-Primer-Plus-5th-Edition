#ifndef WINE_H_
#define WINE_H_

#include <iostream>
#include <valarray>
#include <string>


class Wine
{
private:
        template <typename T1, typename T2>
        class Pair
        {
        private:
                T1 a;
                T2 b;
        public:
                T1& first() { return a; }
                T2& second() { return b; }
                T1 first() const { return a; }
                T2 second() const { return b; }
                Pair(const T1& aval, const T2& bval) : a(aval), b(bval) {}
                Pair() {}
        };

        typedef std::valarray<int> ArrayInt;
        typedef Pair<ArrayInt, ArrayInt> PairArray;

        std::string label;
        int year;
        PairArray vb;
public:
        Wine() : label("no name"), year(0), vb() {}
        ~Wine() {}
        Wine(const char* l, int y, const int yr[], const int bot[]);
        Wine(const char* l, int y);
        void GetBottles();
        std::string& Label() { return label; }
        int sum() const;
        void Show() const;
};



#endif
