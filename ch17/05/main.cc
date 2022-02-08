#include <iostream>
#include <fstream>
#include <vector>

int main() {

        std::fstream input_1_file_stream {
                "mat.dat"
        };
        std::fstream input_2_file_stream {
                "pat.dat"
        };
        std::ofstream output_file_stream {
                "matpat.dar"
        };

        if ((!input_1_file_stream.is_open()) || (!input_2_file_stream.is_open())) {

                std::cout << "Error can't read " << '\n';

        } else {
                std::string line;
                std::vector < std::string > all_friend;

                while (!input_1_file_stream.eof()) {
                        getline(input_1_file_stream, line);
                        all_friend.push_back(line);
                }
                
                while (!input_2_file_stream.eof()) {
                        getline(input_2_file_stream, line);
                        all_friend.push_back(line);
                }

                sort(all_friend.begin(), all_friend.end());
                all_friend.erase(std::unique(all_friend.begin(), all_friend.end()));
                
                for (auto name: all_friend) {
                        output_file_stream << name << '\n';
                }
                
                input_1_file_stream.close();
                input_2_file_stream.close();
                output_file_stream.close();

                std::cout << "Files merged.";
        }

}
