#include <iostream>
#include <cstring>

template < typename T >
        T maxN(T * array, int n) {
                T max = array[0];
                for (int i = 0; i < n; i++) {
                        if (array[i] > max) {
                                max = array[i];
                        }
                }
                return max;
        }
template<> const char* maxN(const char* ch[], int n){
        const char * adress = ch[0];
                for(int i = 0; i < n; i++){
                        if(strlen(ch[i])> strlen(adress)){
                            adress = ch[i];
                        }
                        //std::cout << adress;
                }
                return adress;
}

int main() {

        double dArray[] = {
                1.2345,
                8.234,
                3.57,
                4.67876
        };
        int iArray[] = {
                1,
                2,
                8,
                4,
                5
        };
        const char * cArray[] = {
            "a", 
            "bbb",
            "bigggest1",
            "bigggest2"
        };

        std::cout << maxN(dArray, sizeof(dArray)/sizeof(dArray[0])) << std::endl;
        std::cout << maxN(iArray, sizeof(iArray)/sizeof(iArray[0])) << std::endl;
        std::cout << maxN(cArray, sizeof(cArray)/sizeof(cArray[0]));

}
