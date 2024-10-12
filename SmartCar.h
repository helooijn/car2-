#ifndef SMARTCAR_H
#define SMARTCAR_H

#include <iostream>
#include <fstream>
#include "Chassis.h"
#include "Tires.h"
#include "AGX.h"
#include "Camera.h"
#include "Gyro.h"
#include "Lidar.h"
#include "LCD.h"
#include "Battery.h"
#include "Student.h"

class SmartCar {
public:
    std::string id;
    Chassis chassis;
    Tires tires;
    AGX agx;
    Camera camera;
    Gyro gyro;
    Lidar lidar;
    LCD lcd;
    Battery battery;
    Student student;

    // 构造函数
    SmartCar() : id("") {}

    // set方法
    void setID(const std::string& id) {
        this->id = id;
    }

    // print方法
    void print() const {
        std::cout << "智能小车编号: " << id << std::endl;
        chassis.print();
        tires.print();
        agx.print();
        camera.print();
        gyro.print();
        lidar.print();
        lcd.print();
        battery.print();
        student.print();
    }

    // save方法
    void save(std::ofstream& outFile) const {
        outFile << "智能小车编号: " << id << std::endl;
        chassis.save(outFile);
        tires.save(outFile);
        agx.save(outFile);
        camera.save(outFile);
        gyro.save(outFile);
        lidar.save(outFile);
        lcd.save(outFile);
        battery.save(outFile);
        student.save(outFile);
    }
};

#endif
