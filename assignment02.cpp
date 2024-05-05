// Assignment 02: 输入年龄，并以月份的形式输出年龄

#include <iostream>

int main(){
    double age;     // 声明double类型的变量age（double不用std::）
    std::cout << "Please enter your age: ";
    std::cin >> age;     // 输入年龄
    std::cout << "You are " << age * 12 << " months old." << '\n';     // 计算月份形式的年龄并输出
    return 0;
}

