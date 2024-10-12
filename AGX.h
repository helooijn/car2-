#ifndef AGX_H
#define AGX_H

#include <iostream>
#include <fstream>

class AGX {
public:
    std::string version;

    // 构造函数
    AGX() : version("") {}

    // set方法
    void setVersion(const std::string& version) {
        this->version = version;
    }

    // print方法
    void print() const {
        std::cout << "AGX套件版本: " << version << std::endl;
    }

    // save方法
    void save(std::ofstream& outFile) const {
        outFile << "AGX套件版本: " << version << std::endl;
    }
};

#endif
