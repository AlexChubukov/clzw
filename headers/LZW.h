#ifndef CLZW_LZW_H
#define CLZW_LZW_H
#include <string>
#include <unordered_map>


namespace CLZW {
    class LZW {
    public:
        LZW();
        // Функция компрессии (сжатия)
        void compress(const std::string &input, const std::string &output);
        // Функция декомпрессии
        void decompress(const std::string &input, const std::string &output);
        // инициализация словаря
        void initialize_dictionary(std::unordered_map<std::string , unsigned short> &dictionary);
        void initialize_dictionary(std::unordered_map<unsigned short, std::string> &dictionary);
    };
}

#endif //CLZW_LZW_H
