#include <fstream>
#include "gtest/gtest.h"
#include "../headers/LZW.h"

bool is_files_equal(const std::string &file1, const std::string &file2);

TEST(text_file, 1) {
    std::string input = "input/001.dat";
    std::string temp_output = "compressed/001.clzw";
    std::string output = "my_output/001.ans";

    CLZW::LZW lzw;
    lzw.compress(input, temp_output);
    lzw.decompress(temp_output, output);

    EXPECT_EQ(is_files_equal(input, output),1);
}

TEST(empty_file, 2) {
std::string input = "input/002.dat";
std::string temp_output = "compressed/002.clzw";
std::string output = "my_output/002.ans";

CLZW::LZW lzw;
lzw.compress(input, temp_output);
lzw.decompress(temp_output, output);

EXPECT_EQ(is_files_equal(input, output),1);
}

TEST(tricky, 3) {
    std::string input = "input/003.dat";
    std::string temp_output = "compressed/003.clzw";
    std::string output = "my_output/003.ans";

    CLZW::LZW lzw;
    lzw.compress(input, temp_output);
    lzw.decompress(temp_output, output);

    EXPECT_EQ(is_files_equal(input, output),1);
}

TEST(UPPER_test, 4) {
    std::string input = "input/004.dat";
    std::string temp_output = "compressed/004.clzw";
    std::string output = "my_output/004.ans";

    CLZW::LZW lzw;
    lzw.compress(input, temp_output);
    lzw.decompress(temp_output, output);

    EXPECT_EQ(is_files_equal(input, output),1);
}

TEST(UPPER_tricky_test, 5) {
    std::string input = "input/005.dat";
    std::string temp_output = "compressed/005.clzw";
    std::string output = "my_output/005.ans";

    CLZW::LZW lzw;
    lzw.compress(input, temp_output);
    lzw.decompress(temp_output, output);

    EXPECT_EQ(is_files_equal(input, output),1);
}

TEST(BMP_image, 6) {
    std::string input = "input/006.dat";
    std::string temp_output = "compressed/006.clzw";
    std::string output = "my_output/006.ans";

    CLZW::LZW lzw;
    lzw.compress(input, temp_output);
    lzw.decompress(temp_output, output);

    EXPECT_EQ(is_files_equal(input, output),1);
}

TEST(some_lines_text, 8) {
    std::string input = "input/008.dat";
    std::string temp_output = "compressed/008.clzw";
    std::string output = "my_output/008.ans";

    CLZW::LZW lzw;
    lzw.compress(input, temp_output);
    lzw.decompress(temp_output, output);

    EXPECT_EQ(is_files_equal(input, output),1);
}

TEST(big_file1, 9) {
    std::string input = "input/009.dat";
    std::string temp_output = "compressed/009.clzw";
    std::string output = "my_output/009.ans";

    CLZW::LZW lzw;
    lzw.compress(input, temp_output);
    lzw.decompress(temp_output, output);

    EXPECT_EQ(is_files_equal(input, output),1);
}

TEST(big_file2, 10) {
    std::string input = "input/010.dat";
    std::string temp_output = "compressed/010.clzw";
    std::string output = "my_output/010.ans";

    CLZW::LZW lzw;
    lzw.compress(input, temp_output);
    lzw.decompress(temp_output, output);

    EXPECT_EQ(is_files_equal(input, output),1);
}

TEST(big_json_file, 11) {
    std::string input = "input/011.dat";
    std::string temp_output = "compressed/011.clzw";
    std::string output = "my_output/011.ans";

    CLZW::LZW lzw;
    lzw.compress(input, temp_output);
    lzw.decompress(temp_output, output);

    EXPECT_EQ(is_files_equal(input, output),1);
}

TEST(PNG_test, 12) {
    std::string input = "input/012.dat";
    std::string temp_output = "compressed/012.clzw";
    std::string output = "my_output/012.ans";

    CLZW::LZW lzw;
    lzw.compress(input, temp_output);
    lzw.decompress(temp_output, output);

    EXPECT_EQ(is_files_equal(input, output),1);
}

TEST(CSS_test, 13) {
    std::string input = "input/013.dat";
    std::string temp_output = "compressed/013.clzw";
    std::string output = "my_output/013.ans";

    CLZW::LZW lzw;
    lzw.compress(input, temp_output);
    lzw.decompress(temp_output, output);

    EXPECT_EQ(is_files_equal(input, output),1);
}

TEST(CPP_test, 14) {
    std::string input = "input/014.dat";
    std::string temp_output = "compressed/014.clzw";
    std::string output = "my_output/014.ans";

    CLZW::LZW lzw;
    lzw.compress(input, temp_output);
    lzw.decompress(temp_output, output);

    EXPECT_EQ(is_files_equal(input, output),1);
}

TEST(JPEG_test, 15) {
    std::string input = "input/015.dat";
    std::string temp_output = "compressed/015.clzw";
    std::string output = "my_output/015.ans";

    CLZW::LZW lzw;
    lzw.compress(input, temp_output);
    lzw.decompress(temp_output, output);

    EXPECT_EQ(is_files_equal(input, output),1);
}

TEST(MP3_test, 16) {
    std::string input = "input/016.dat";
    std::string temp_output = "compressed/016.clzw";
    std::string output = "my_output/016.ans";

    CLZW::LZW lzw;
    lzw.compress(input, temp_output);
    lzw.decompress(temp_output, output);

    EXPECT_EQ(is_files_equal(input, output),1);
}

TEST(ZIP_test, 17) {
    std::string input = "input/017.dat";
    std::string temp_output = "compressed/017.clzw";
    std::string output = "my_output/017.ans";

    CLZW::LZW lzw;
    lzw.compress(input, temp_output);
    lzw.decompress(temp_output, output);

    EXPECT_EQ(is_files_equal(input, output),1);
}

TEST(MP4_test, 18) {
    std::string input = "input/018.dat";
    std::string temp_output = "compressed/018.clzw";
    std::string output = "my_output/018.ans";

    CLZW::LZW lzw;
    lzw.compress(input, temp_output);
    lzw.decompress(temp_output, output);

    EXPECT_EQ(is_files_equal(input, output),1);
}

TEST(BIG_MP4_test, 19) {
    std::string input = "input/019.dat";
    std::string temp_output = "compressed/019.clzw";
    std::string output = "my_output/019.ans";

    CLZW::LZW lzw;
    lzw.compress(input, temp_output);
    lzw.decompress(temp_output, output);

    EXPECT_EQ(is_files_equal(input, output),1);
}




bool is_files_equal(const std::string &file1, const std::string &file2) {
    std::ifstream f1(file1, std::ios::binary);
    std::ifstream f2(file2, std::ios::binary);
    if (f1.is_open() && f2.is_open())
    {
        char ch1 = 0, ch2 = 0;
        while (f1.get(ch1) && f2.get(ch2))
        {
            if (ch1 != ch2)
            {
                f1.close();
                f2.close();
                return false;
            }
        }
    }
    else
        return false;
    f1.close();
    f2.close();
    return true;
}