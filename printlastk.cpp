#include <iostream>
#include <fstream>
#include <vector>
#include <filesystem>
#include "printlastk.hpp"

// Print the last K lines of the file specified by path
// does not count the last empty line as a line
void PrintLastKLines(int k, std::string path){
    if(k < 1){
        return;
    }
    if(!std::filesystem::exists(path)){
        throw std::invalid_argument("invalid file path");
    }

    // open at end of file
    std::ifstream file(path, std::ios_base::ate);
    if(file.fail()){
        throw std::invalid_argument("cannot open file");
    }

    std::string buf = "";
    for(int pos = (int)(file.tellg())-1; pos >= 0; pos--){
        file.seekg(pos);
        char c = file.get();
        if(c == '\n' && !buf.empty()){
            k--;
            if(k <= 0){
                break;
            }
        }
        buf += c;
    }
    std::reverse(buf.begin(), buf.end()); 
    std::cout << buf << std::endl;
}