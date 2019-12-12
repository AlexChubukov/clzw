#include <fstream>
#include "gtest/gtest.h"
#include "../headers/LZW.h"

bool is_files_equal(const std::string &file1, const std::string &file2);

TEST(text_file, 1) {
    std::string input = "../Test1/001.dat";
    std::string temp_output = "../Test1/001.clzw";
    std::string output = "../Test1/001.ans";

    CLZW::LZW lzw;
    lzw.compress(input, temp_output);
    lzw.decompress(temp_output, output);

    EXPECT_EQ(is_files_equal(input, output),1);
}

TEST(empty_file, 2) {
std::string input = "../Test2/002.dat";
std::string temp_output = "../Test2/002.clzw";
std::string output = "../Test2/002.ans";

CLZW::LZW lzw;
lzw.compress(input, temp_output);
lzw.decompress(temp_output, output);

EXPECT_EQ(is_files_equal(input, output),1);
}

TEST(tricky, 3) {
    std::string input = "../Test3/003.dat";
    std::string temp_output = "../Test3/003.clzw";
    std::string output = "../Test3/003.ans";

    CLZW::LZW lzw;
    lzw.compress(input, temp_output);
    lzw.decompress(temp_output, output);

    EXPECT_EQ(is_files_equal(input, output),1);
}

TEST(UPPER_test, 4) {
    std::string input = "../Test4/004.dat";
    std::string temp_output = "../Test4/004.clzw";
    std::string output = "../Test4/004.ans";

    CLZW::LZW lzw;
    lzw.compress(input, temp_output);
    lzw.decompress(temp_output, output);

    EXPECT_EQ(is_files_equal(input, output),1);
}

TEST(UPPER_tricky_test, 5) {
    std::string input = "../Test5/005.dat";
    std::string temp_output = "../Test5/005.clzw";
    std::string output = "../Test5/005.ans";

    CLZW::LZW lzw;
    lzw.compress(input, temp_output);
    lzw.decompress(temp_output, output);

    EXPECT_EQ(is_files_equal(input, output),1);
}

TEST(BMP_image, 6) {
    std::string input = "../Test6/006.dat";
    std::string temp_output = "../Test6/006.clzw";
    std::string output = "../Test6/006.ans";

    CLZW::LZW lzw;
    lzw.compress(input, temp_output);
    lzw.decompress(temp_output, output);

    EXPECT_EQ(is_files_equal(input, output),1);
}

TEST(some_lines_text, 8) {
    std::string input = "../Test8/008.dat";
    std::string temp_output = "../Test8/008.clzw";
    std::string output = "../Test8/008.ans";

    CLZW::LZW lzw;
    lzw.compress(input, temp_output);
    lzw.decompress(temp_output, output);

    EXPECT_EQ(is_files_equal(input, output),1);
}

TEST(big_file1, 9) {
    std::string input = "../Test9/009.dat";
    std::string temp_output = "../Test9/009.clzw";
    std::string output = "../Test9/009.ans";

    CLZW::LZW lzw;
    lzw.compress(input, temp_output);
    lzw.decompress(temp_output, output);

    EXPECT_EQ(is_files_equal(input, output),1);
}

TEST(big_file2, 10) {
    std::string input = "../Test10/010.dat";
    std::string temp_output = "../Test10/010.clzw";
    std::string output = "../Test10/010.ans";

    CLZW::LZW lzw;
    lzw.compress(input, temp_output);
    lzw.decompress(temp_output, output);

    EXPECT_EQ(is_files_equal(input, output),1);
}

TEST(big_json_file, 11) {
    std::string input = "../Test11/011.dat";
    std::string temp_output = "../Test11/011.clzw";
    std::string output = "../Test11/011.ans";

    CLZW::LZW lzw;
    lzw.compress(input, temp_output);
    lzw.decompress(temp_output, output);

    EXPECT_EQ(is_files_equal(input, output),1);
}

TEST(PNG_test, 12) {
    std::string input = "../Test12/012.dat";
    std::string temp_output = "../Test12/012.clzw";
    std::string output = "../Test12/012.ans";

    CLZW::LZW lzw;
    lzw.compress(input, temp_output);
    lzw.decompress(temp_output, output);

    EXPECT_EQ(is_files_equal(input, output),1);
}

TEST(CSS_test, 13) {
    std::string input = "../Test13/013.dat";
    std::string temp_output = "../Test13/013.clzw";
    std::string output = "../Test13/013.ans";

    CLZW::LZW lzw;
    lzw.compress(input, temp_output);
    lzw.decompress(temp_output, output);

    EXPECT_EQ(is_files_equal(input, output),1);
}

TEST(CPP_test, 14) {
    std::string input = "../Test14/014.dat";
    std::string temp_output = "../Test14/014.clzw";
    std::string output = "../Test14/014.ans";

    CLZW::LZW lzw;
    lzw.compress(input, temp_output);
    lzw.decompress(temp_output, output);

    EXPECT_EQ(is_files_equal(input, output),1);
}

TEST(JPEG_test, 15) {
    std::string input = "../Test15/015.dat";
    std::string temp_output = "../Test15/015.clzw";
    std::string output = "../Test15/015.ans";

    CLZW::LZW lzw;
    lzw.compress(input, temp_output);
    lzw.decompress(temp_output, output);

    EXPECT_EQ(is_files_equal(input, output),1);
}

TEST(MP3_test, 16) {
    std::string input = "../Test16/016.dat";
    std::string temp_output = "../Test16/016.clzw";
    std::string output = "../Test16/016.ans";

    CLZW::LZW lzw;
    lzw.compress(input, temp_output);
    lzw.decompress(temp_output, output);

    EXPECT_EQ(is_files_equal(input, output),1);
}

TEST(ZIP_test, 17) {
    std::string input = "../Test17/017.dat";
    std::string temp_output = "../Test17/017.clzw";
    std::string output = "../Test17/017.ans";

    CLZW::LZW lzw;
    lzw.compress(input, temp_output);
    lzw.decompress(temp_output, output);

    EXPECT_EQ(is_files_equal(input, output),1);
}

TEST(MP4_test, 18) {
    std::string input = "../Test18/018.dat";
    std::string temp_output = "../Test18/018.clzw";
    std::string output = "../Test18/018.ans";

    CLZW::LZW lzw;
    lzw.compress(input, temp_output);
    lzw.decompress(temp_output, output);

    EXPECT_EQ(is_files_equal(input, output),1);
}

TEST(BIG_MP4_test, 19) {
    std::string input = "../Test19/019.dat";
    std::string temp_output = "../Test19/019.clzw";
    std::string output = "../Test19/019.ans";

    CLZW::LZW lzw;
    lzw.compress(input, temp_output);
    lzw.decompress(temp_output, output);

    EXPECT_EQ(is_files_equal(input, output),1);
}

TEST(Classic_test, 20) {
    std::string input = "../Test20/020.dat";
    std::string temp_output = "../Test20/020.clzw";
    std::string output = "../Test20/020.ans";

    CLZW::LZW lzw;
    lzw.compress(input, temp_output);
    lzw.decompress(temp_output, output);

    EXPECT_EQ(is_files_equal(input, output),1);
}

TEST(PDF_test, 21) {
    std::string input = "../Test21/021.dat";
    std::string temp_output = "../Test21/021.clzw";
    std::string output = "../Test21/021.ans";

    CLZW::LZW lzw;
    lzw.compress(input, temp_output);
    lzw.decompress(temp_output, output);

    EXPECT_EQ(is_files_equal(input, output),1);
}

TEST(FB2_test, 22) {
    std::string input = "../Test22/022.dat";
    std::string temp_output = "../Test22/022.clzw";
    std::string output = "../Test22/022.ans";

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