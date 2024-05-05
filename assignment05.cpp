// Assignment 05: 不安全转化与窄化

#include <iostream>

int main(){
    double d = 0;   // 定义双精度浮点型变量d

    // 不停输入奇怪的d的值
    while(std::cin >> d){
        // 将不同类型的变量的值赋给不同类型的变量，观察是否发生窄化
        int i = d;
        char c = i;
        int i2 = c;

        // 打印
        std::cout << "d == " << d << std::endl
                  << "i == " << i << std::endl
                  << "i2 == " << i2 <<std::endl
                  << "char(" << c << ")" << std::endl;
    }

    return 0;
}