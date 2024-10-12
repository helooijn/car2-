#ifndef BATTERY_H
#define BATTERY_H

#include <iostream>
#include <fstream>

class Battery {
public:
    std::string capacity;

    // 构造函数
    Battery() : capacity("") {}

    // set方法
    void setCapacity(const std::string& capacity) {
        this->capacity = capacity;
    }

    // print方法
    void print() const {
        std::cout << "电池容量: " << capacity << std::endl;
    }

    // save方法
    void save(std::ofstream& outFile) const {
        outFile << "电池容量: " << capacity << std::endl;
    }
};

#endif
