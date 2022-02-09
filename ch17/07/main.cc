#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <algorithm>
#include <cstdlib>

using namespace std;
std::vector<std::string> vostr;
string temp;

class Store{
    private:
    std::ofstream * pfout;
   public:
    Store(std::ofstream & fout){pfout = &fout;}
    Store operator()(const string &str){
        size_t len = str.length();
        pfout->write((char *) & len, sizeof(std::size_t));
        pfout->write(str.data(), len);
        return *this;
    }
};

void ShowStr(const string &s){
    std::cout << s << '\n';
}

void GetStrs(std::ifstream & fin, std::vector<string> vistr){
    size_t len = 0;
    std::string str;
    char ch;
    while(fin.peek() && !fin.eof()){
        fin.read((char *)&len, sizeof(size_t));
        for(size_t i = 0; i < len; i++){
            fin.read(&ch, sizeof(char));
            str.push_back(ch);
        }
        vistr.push_back(str);
        str.clear();
    }
}

int main()
{
    cout << "Enter string (empty line to quit):\n";
    while(getline(cin, temp) && temp[0] != '\0'){
        vostr.push_back(temp);
    }
    cout << "Here is your input.\n";
    for_each(vostr.begin(), vostr.end(), ShowStr);
    
    // save to file
    std::ofstream fout("strings.dat", std::ios_base::out | std::ios_base::binary);
	for_each(vostr.begin(), vostr.end(), Store(fout));
	fout.close();
    
    // data to vector
    vector<string> vistr;
    ifstream fin("strings.dat", ios_base::in | ios_base::binary);
    if(!fin.is_open()){
        cerr << "could not open file for input.\n";
        exit(EXIT_FAILURE);
    }
    GetStrs(fin, vistr);
    cout << "\nHere are the strings read from the file:\n";
    for_each(vistr.begin(), vistr.end(), ShowStr);
    

    return 0;
}
