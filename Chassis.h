#ifndef CHASSIS_H
#define CHASSIS_H

#include <iostream>
#include <fstream>

class Chassis {
public:
    std::string id;

    // 构造函数
    Chassis() : id("") {}

    // set方法
    void setID(const std::string& id) {
        this->id = id;
    }

    // print方法
    void print() const {
        std::cout << "底盘编号: " << id << std::endl;
    }

    // save方法
    void save(std::ofstream& outFile) const {
        outFile << "底盘编号: " << id << std::endl;
    }
};

#endif
