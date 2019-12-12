#include <iostream>
#include <exception>
#include "../headers/LZW.h"

int main(int argc, char *argv[]) {
    try {
        if(argc < 3) {
            throw std::runtime_error("Неправильный формат ввода данных\n$ ./clzw <входной файл> <выходной файл> <-c or -d>");
        }
        std::string input_file = argv[1];
        std::string output_file = argv[2];
        std::string argument = argv[3];

        if ("-c" != argument && "-d" != argument)
        {
            throw std::runtime_error("Неправильный формат ввода данных\n$ ./clzw <входной файл> <выходной файл> <-c or -d>");
        }

        CLZW::LZW lzw;
        if ("-c" == argument)
        {
            lzw.compress(input_file, output_file);
        }
        else
        {
            lzw.decompress(input_file, output_file);
        }

    }
    catch(std::exception &exc) {
        std::cout << exc.what() << std::endl;
    }
    catch (...) {
        std::cout << "Unexpected error" << std::endl;
    }
}