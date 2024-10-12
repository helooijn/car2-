#ifndef LIDAR_H
#define LIDAR_H

#include <iostream>
#include <fstream>

class Lidar {
public:
    std::string range;

    // 构造函数
    Lidar() : range("") {}

    // set方法
    void setRange(const std::string& range) {
        this->range = range;
    }

    // print方法
    void print() const {
        std::cout << "多线激光雷达量程: " << range << std::endl;
    }

    // save方法
    void save(std::ofstream& outFile) const {
        outFile << "多线激光雷达量程: " << range << std::endl;
    }
};

#endif
