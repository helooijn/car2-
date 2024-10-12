#ifndef CAMERA_H
#define CAMERA_H

#include <iostream>
#include <fstream>

class Camera {
public:
    std::string model;

    // 构造函数
    Camera() : model("") {}

    // set方法
    void setModel(const std::string& model) {
        this->model = model;
    }

    // print方法
    void print() const {
        std::cout << "双目摄像头型号: " << model << std::endl;
    }

    // save方法
    void save(std::ofstream& outFile) const {
        outFile << "双目摄像头型号: " << model << std::endl;
    }
};

#endif
