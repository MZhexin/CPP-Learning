// Assignment 01: 输出姓名

#include <iostream>
#include <string>

// std::作用是引入标准库中的函数和类
// 还有一种写法是using namespace std;，这样就可以不用std::了，但是不推荐

int main() {
    // 输出流：C++库中用于输出数据的抽象，用于将数据从程序发送到外部设备（如Terminal、文件等）
    std::cout << "Please enter your first and second name\n";
    std::string first;      // 声明名字
    std::string second;     // 声明中间名
    std::cin >> first >> second;    // 输入两个名字
    std::cout << "Hello," << first << " " << second << '\n';    // 输出

    return 0;   // 在UNIX中，main函数的返回值用来检查程序是否被正常运行，0表示程序正常运行
}

