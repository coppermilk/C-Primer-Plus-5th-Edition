#include <iostream>
#include <fstream>

int main(int argc, char * argv[]) {

        std::string file_name;
        std::string input_information;

        if (argc < 2) {
                std::cout << "No comand line argument";
                exit(EXIT_FAILURE);
        } else {
                for (int i = 1; i < argc; i++) {
                    
                        file_name = argv[i];
                        std::cout << file_name << " >> ";
                        
                        getline(std::cin, input_information);
                        
                        std::fstream file;
                        file.open(file_name, std::fstream:: in
                                | std::fstream::out | std::fstream::app);

                        if (!file.is_open()) {
                                std::cout << "Error can't read " 
                                << file_name << '\n';

                        } else {
                                file << input_information << '\n';
                                file.close();
                                std::cout << ">> " << file_name << " saved.\n";
                        }
                }

        }

}
