#include <iostream>
#include <vector>
#include <fstream>
#include <conio.h> // 用于获取键盘输入

#include "SmartCar.h"

// 录入小车信息
void inputCarInfo(SmartCar& car) {
    std::string input;

    std::cout << "输入智能小车编号: ";
    std::cin >> input;
    car.setID(input);

    std::cout << "输入底盘编号: ";
    std::cin >> input;
    car.chassis.setID(input);

    std::cout << "输入轮胎类型: ";
    std::cin >> input;
    car.tires.setType(input);

    std::cout << "输入AGX版本: ";
    std::cin >> input;
    car.agx.setVersion(input);

    std::cout << "输入双目摄像头型号: ";
    std::cin >> input;
    car.camera.setModel(input);

    std::cout << "输入9轴陀螺仪型号: ";
    std::cin >> input;
    car.gyro.setType(input);

    std::cout << "输入多线激光雷达量程: ";
    std::cin >> input;
    car.lidar.setRange(input);

    std::cout << "输入液晶显示屏尺寸: ";
    std::cin >> input;
    car.lcd.setSize(input);

    std::cout << "输入电池容量: ";
    std::cin >> input;
    car.battery.setCapacity(input);

    std::cout << "输入学生学号: ";
    std::cin >> input;
    car.student.setID(input);

    std::cout << "输入学生姓名: ";
    std::cin >> input;
    car.student.setName(input);
}

// 保存所有小车信息到文件
void saveCarsToFile(const std::vector<SmartCar>& cars, const std::string& filename) {
    std::ofstream outFile(filename);
    for (const auto& car : cars) {
        car.save(outFile);
        outFile << "--------------------------\n";
    }
    outFile.close();
}

// 显示当前小车的信息
void displayCar(const SmartCar& car) {
    car.print();
}

// 主程序逻辑，按n键查看下一辆，按p键查看上一辆
void browseCars(const std::vector<SmartCar>& cars) {
    int currentCarIndex = 0;
    char command;

    while (true) {
        std::cout << "显示第 " << (currentCarIndex + 1) << " 台智能小车的信息：" << std::endl;
        displayCar(cars[currentCarIndex]);

        std::cout << "\n按 'n' 显示下一辆小车，按 'p' 显示上一辆小车，按 'q' 退出浏览：" << std::endl;
        command = _getch(); // 获取键盘输入

        if (command == 'n') {
            if (currentCarIndex < cars.size() - 1) {
                currentCarIndex++;
            } else {
                std::cout << "已经是最后一辆小车，无法再向后查看！" << std::endl;
            }
        } else if (command == 'p') {
            if (currentCarIndex > 0) {
                currentCarIndex--;
            } else {
                std::cout << "已经是第一辆小车，无法再向前查看！" << std::endl;
            }
        } else if (command == 'q') {
            std::cout << "退出浏览。" << std::endl;
            break;
        }
    }
}

int main() {
    std::vector<SmartCar> cars(10);
    for (int i = 0; i < 10; ++i) {
        std::cout << "录入第 " << (i + 1) << " 台智能小车信息:" << std::endl;
        inputCarInfo(cars[i]);
    }

    // 保存到文件
    saveCarsToFile(cars, "smart_cars.txt");

    // 浏览小车信息
    browseCars(cars);

    return 0;
}
