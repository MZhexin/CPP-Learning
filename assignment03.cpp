// Assignment 03: 整型和浮点型运算

#include <iostream>

int main(){
    std::cout << "Enter a integer number and a float number:" << std::endl;
    int n1;
    double n2;
    std::cin >> n1 >> n2;

    // 整型的运算
    std:: cout << "n1 == " << n1 << '\n'
               << "n1 + 1 == " << n1 + 1 << '\n'
               << "three times n1 == " << n1 * 3 << '\n'
               << "twice n1 == " << n1 + n1 << '\n'
               << "n1 squared == " << n1 * n1 << '\n'
               << "half of n1 == " << n1 / 2 << '\n'
               << "square root of n1 == " << sqrt(double(n1)) << '\n';

    // 浮点型的运算
    std:: cout << "n2 == " << n2 << '\n'
               << "n2 + 1 == " << n2 + 1 << '\n'
               << "three times n2 == " << n2 * 3 << '\n'
               << "twice n2 == " << n2 + n2 << '\n'
               << "n2 squared == " << n2 * n2 << '\n'
               << "half of n2 == " << n2 / 2 << '\n'
               << "square root of n2 == " << sqrt(n2) << '\n';

    return 0;
}
