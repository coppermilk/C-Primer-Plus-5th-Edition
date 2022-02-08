#include <iostream>
#include <fstream>

int main(int argc, char * argv[]) {

        std::string in_file_name;
        std::string out_file_name;

        if (argc < 3) {
                std::cout << "No comand line argument";
                exit(EXIT_FAILURE);
        } else {

                in_file_name = argv[1];
                out_file_name = argv[2];

                std::fstream input_file_stream;
                std::fstream output_file_stream;

                input_file_stream.open(in_file_name, std::fstream:: in );
                output_file_stream.open(out_file_name, std::fstream::out);

                if ((!input_file_stream.is_open()) 
                || (!output_file_stream.is_open())) {
                        std::cout << "Error can't read " <<
                                in_file_name << " or " << out_file_name << '\n';

                } else {
                        std::string line;
                        while (getline(input_file_stream, line)) {
                                output_file_stream << line << '\n';
                        }
                        
                        input_file_stream.close();
                        output_file_stream.close();
                        
                        std::cout << "File cloned.";
                }

        }

}
