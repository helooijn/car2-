#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <fstream>

class Student {
public:
    std::string id;
    std::string name;

    // 构造函数
    Student() : id(""), name("") {}

    // set方法
    void setID(const std::string& id) {
        this->id = id;
    }

    void setName(const std::string& name) {
        this->name = name;
    }

    // print方法
    void print() const {
        std::cout << "学生学号: " << id << ", 姓名: " << name << std::endl;
    }

    // save方法
    void save(std::ofstream& outFile) const {
        outFile << "学生学号: " << id << ", 姓名: " << name << std::endl;
    }
};

#endif
