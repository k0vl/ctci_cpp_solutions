#include <iostream>
#include <fstream>
#include "readlastn.hpp"

void PrintLastNLines(std::string path){
    std::cout << "path: " << path << std::endl;
    std::ifstream file(path, std::ios_base::ate);
    
    std::cout << "filesize is: " << file.tellg() << std::endl;
    std::string buf = "";
    for(int pos = (int)(file.tellg())-1; pos >= 0; pos--){
        file.seekg(pos);
        char c = file.get();
        if(c == '\n' && !buf.empty()){
            std::cout << buf;
            buf="";
        }
        buf.insert(0, 1, c);
    }
    if(!buf.empty()){
        std::cout << buf;
    }
}