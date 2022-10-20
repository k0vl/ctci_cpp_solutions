#include <iostream>
#include <filesystem>
#include "readlastn.hpp"

int main(int argc, char** argv) {
    std::cout << "Main\n";
    std::string path = "C:\\Users\\kovlv\\Projects\\read_last_n\\test.txt";
    if(std::filesystem::exists(path)){
        PrintLastNLines(path);
    }
}
