#include "../headers/LZW.h"
#include <vector>
#include <fstream>

const unsigned short MAX_CODE = (1<<16)-1;

std::vector<char> shortToBytes(const unsigned short &param);
unsigned short CharToShort(const char *byte);

CLZW::LZW::LZW() {}

void CLZW::LZW::compress(const std::string &input_file, const std::string &output_file) {
    // Открываем побитого файл, из которого будем читать информацию
    std::ifstream input(input_file, std::ios::binary);
    if (!input.is_open())
    {
        throw std::runtime_error("Ошибка открытия файла");
    }


    // Создаем словарь и инициализируем его начальным алфавитом
    std::unordered_map<std::string, unsigned short> dictionary;
    initialize_dictionary(dictionary);

    // создаем файл, в который будет записываться сжатая информация
    std::ofstream output(output_file, std::ios::binary);
    if (!output.is_open())
    {
        input.close();
        throw std::runtime_error("Ошибка открытия файла");
    }

    unsigned short size = 256;
    std::string w = "";
    char c = 0;
    while (input.get(c)) {
        std::string wc = w + c;
        // Есди слово есть в словаре, то ищем более длинное подслово
        if (dictionary.count(wc))
        {
            w = wc;
        }
        // Если же такого слова в словаре нет, то выводим предыдущее слово в файл и добавляем новое подслово в словарь
        else
         {
            for(char &block : shortToBytes(dictionary[w])) {
                output << block;
            }
            if (size < MAX_CODE) {
                dictionary[wc] = size++;
            }
             w = c;
        }
    }
    input.close();
    // Обрабатываем случай, если файл закончился, но слово еще не выведено в поток вывода
    if (!w.empty()) {
        for(char &block : shortToBytes(dictionary[w])) {
            output << block;
        }
    }

    input.close();
    output.close();
}

void CLZW::LZW::decompress(const std::string &input_file, const std::string &output_file) {
    // Открываем побитого файл, из которого будем читать информацию
    std::ifstream input(input_file, std::ios::binary | std::ios::in);
    if (!input.is_open())
    {
        throw std::runtime_error("Ошибка открытия файла");
    }
    // создаем файл, в который будет записываться сжатая информация
    std::ofstream output(output_file);
    if (!output.is_open())
    {
        input.close();
        throw std::runtime_error("Ошибка открытия файла");
    }

    // Создаем словарь и инициализируем его начальным алфавитом
    std::unordered_map<unsigned short, std::string> dictionary;
    initialize_dictionary(dictionary);
    unsigned short size = 256;

    char buffer[2];
    std::string w = "";
    if (input.read (buffer, 2)) {
        w = dictionary[CharToShort(buffer)];
        output << w;
    }

    std::string result = w;
    std::string entry;
    while (input.read (buffer, 2)) {
        int k = CharToShort(buffer);
        if (dictionary.count(k)) {
            entry = dictionary[k];
        } else {
            // обработка исключительного случая, когда слова еще нет в словаре
            if (k == size) {
                entry = w + w[0];
            } else {
                throw std::runtime_error("Непредвиденная ошибка");
            }
        }

        output << entry;
        if (size < MAX_CODE) dictionary[size++] = w + entry[0];
        w = entry;
    }
    input.close();
    output.close();
}


void CLZW::LZW::initialize_dictionary(std::unordered_map<std::string, unsigned short> &dictionary) {
    for (std::size_t i = 0; i < 256; ++i) {
        dictionary[std::string(1,i)] = i;
    }
}

void CLZW::LZW::initialize_dictionary(std::unordered_map<unsigned short, std::string> &dictionary) {
    for (std::size_t i = 0; i < 256; ++i) {
        dictionary[i] = std::string(1, i);
    }
}


unsigned short CharToShort(const char *byte) {
    unsigned short integer = 0;
    for (std::size_t i = 0; i < sizeof(short); ++i) {
        integer = integer << (8);
        unsigned short add = static_cast<unsigned char>(byte[i]);
        integer = integer + add;
    }
    return integer;
}

std::vector<char> shortToBytes(const unsigned short &param) {
    std::vector<char> array_of_byte(2);
    for (int i = 0; i < 2; ++i) {
        array_of_byte[1 - i] = (param >> (i * 8));
    }
    return array_of_byte;
}
