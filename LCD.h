#ifndef LCD_H
#define LCD_H

#include <iostream>
#include <fstream>

class LCD {
public:
    std::string size;

    // 构造函数
    LCD() : size("") {}

    // set方法
    void setSize(const std::string& size) {
        this->size = size;
    }

    // print方法
    void print() const {
        std::cout << "液晶显示屏尺寸: " << size << std::endl;
    }

    // save方法
    void save(std::ofstream& outFile) const {
        outFile << "液晶显示屏尺寸: " << size << std::endl;
    }
};

#endif
