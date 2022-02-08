#include <iostream>
#include <fstream>

int main() {

        std::fstream input_1_file_stream {
                "1.txt"
        };
        std::fstream input_2_file_stream {
                "2.txt"
        };
        std::ofstream output_file_stream {
                "3.txt"
        };

        if ((!input_1_file_stream.is_open()) ||
                (!input_2_file_stream.is_open())) {

                std::cout << "Error can't read " << '\n';

        } else {
                std::string line_1;
                std::string line_2;

                bool is_1_file_end = false;
                bool is_2_file_end = false;

                while (!is_1_file_end || !is_2_file_end) {

                        is_1_file_end = input_1_file_stream.eof();
                        is_2_file_end = input_2_file_stream.eof();

                        if (!is_1_file_end && !is_2_file_end) {
                                getline(input_1_file_stream, line_1);
                                getline(input_2_file_stream, line_2);
                                output_file_stream << line_1 << " " 
                                << line_2 << '\n';
                                
                        } else if (!is_1_file_end) {
                                getline(input_1_file_stream, line_1);
                                output_file_stream << line_1 << std::endl;
                                
                        } else if (!is_2_file_end) {
                                getline(input_2_file_stream, line_2);
                                output_file_stream << line_2 << std::endl;
                        }

                }

                input_1_file_stream.close();
                input_2_file_stream.close();
                output_file_stream.close();

                std::cout << "Files merged.";
        }

}
