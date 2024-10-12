#ifndef GYRO_H
#define GYRO_H

#include <iostream>
#include <fstream>

class Gyro {
public:
    std::string type;

    // 构造函数
    Gyro() : type("") {}

    // set方法
    void setType(const std::string& type) {
        this->type = type;
    }

    // print方法
    void print() const {
        std::cout << "9轴陀螺仪型号: " << type << std::endl;
    }

    // save方法
    void save(std::ofstream& outFile) const {
        outFile << "9轴陀螺仪型号: " << type << std::endl;
    }
};

#endif
