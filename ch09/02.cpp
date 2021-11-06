//static. cpp  -- использование  статической локальной переменной 
#include  <iostream>
#include <string>
#include <cstring>

//   константы 
const int ArSize  =  10;   
//   прототип функции 
void strcount(std::string  str) ; 
int main ()   
{ 
using namespace  std; 
    //char  input [ArSize];   
    string input;
    
    //char  next; 
    string next;
    
    cout  <<  "Введите  строку :  \n"; 
    
    //cin.get ( input,  ArSize); 
    getline(cin, input);
    
    while (1) 
    { 
        //cin.get (next)  ; 
        //while (next !=  '\n' )  //  строка  не  помещается ! 
            //cin.get (next) ; 
        strcount (input) ; 
        cout  <<  "Введите  следующую  строку  (или  пустую  строку  для  завершения) :   \n"; 
        //cin.get (input,  ArSize) ;
        if(input == ""){
            break;
        }
        getline(cin, input);
        
    }
    cout  << "Всего наилучшего ! \ n ";   
return 0;
}

//void strcount(const char  *  str) 
void strcount(std::string str) 
{
using namespace  std; 
    static int total =  0 ;   
    int count =  0 ;   
    // с татическая локальная переменная 
    // автоматическая локальная переменная 
    cout <<  "\""   <<  str  <<"\"  содержит " ;   
    //while  (* str++) 
    //    count++; 
    count = str.length();
    total += count; 
    //   переход к  концу  строки 
    cout  <<  count <<  "  символов\n"; 
    cout << "Всего символов - "<< total << "\n";
}
