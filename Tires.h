#ifndef TIRES_H
#define TIRES_H

#include <iostream>
#include <fstream>

class Tires {
public:
    std::string type;

    // 构造函数
    Tires() : type("") {}

    // set方法
    void setType(const std::string& type) {
        this->type = type;
    }

    // print方法
    void print() const {
        std::cout << "轮胎类型: " << type << std::endl;
    }

    // save方法
    void save(std::ofstream& outFile) const {
        outFile << "轮胎类型: " << type << std::endl;
    }
};

#endif
