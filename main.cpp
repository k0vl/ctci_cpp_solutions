#include <iostream>
#include <filesystem>
#include "printlastk.hpp"

int main(int argc, char** argv) {
    std::string path = "..\\..\\test.txt";
    if(std::filesystem::exists(path)){
        PrintLastKLines(10, path);
    }else{
        std::cout << "file " << path << " does not exist" << std::endl;
    }
}
