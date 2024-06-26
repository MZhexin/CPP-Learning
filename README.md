# C++程序设计
学习目的
---
学习C++语言、学习数据结构与算法、学习计算机底层技术等。

学习资料
---
本学习基于Bjarne Stroustrup的《C++程序设计原理与实践（基础篇）》一书， 主要是“试一试”“简单练习”和“习题”部分的代码实现。
部分内容来自网络论坛、GPT、智谱清言和Fitten Code插件等辅助工具。

知识点
---
_来自《C++程序设计原理与实践（基础篇）》、GPT和Fitten Code_
1. 作为程序员，永远不要预判自己可能需要什么
2. 程序设计是问题求解的一种描述形式
3. 代码必须可维护，即可以被其他人理解并修改
4. C++
   * **源代码：**.cpp文件 _（人类读写）_
   * **头文件：**.h文件 _（人类读写）_
   * **可执行代码** _（机器代码）_
        * .o文件 &nbsp;&nbsp;&nbsp;&nbsp; Unix下
        * .obj文件 &nbsp;&nbsp;&nbsp;&nbsp; Windows下
5. **对象：** 存储数据的位置
6. C++中，单引号的字符类型（char），双引号是字符串类型（string）
7. 区别
   * s >> x：从s读到x
   * s << x：从x写到s
8. cin >> x 在读入时，遇到**空格**、**制表符**、**换行符**等空白符号，会自动忽略，直到遇到下一个有效输入
9. **不要用下划线作为变量名的前缀**，这样的变量名会被视为系统保留字 e.g. _name
10. string类型在保存时，除了字符串内容，其长度也会被保存
11. 区别（变量必须被初始化之后才能被使用）
    * int x; &nbsp;&nbsp;&nbsp;&nbsp; 声明
    * x = 5; &nbsp;&nbsp;&nbsp;&nbsp; 初始化
    * int y = 5; &nbsp;&nbsp;&nbsp;&nbsp; 声明并初始化
12. C++11版本后推荐**列表初始化方式**，可以有效避免窄化问题（即不同类型变量之间转化时的损失，e.g. double转成int时丢失小数点后的值）
    * int x {5};
    * 遇到窄化的问题时，会给Warning或Error
13. CMakeLists.txt文件是CMake构建系统的配置文件，它包含了一组指令，用于描述如何构建项目、需要哪些文件、以及如何将它们编译和链接成可执行文件、静态库或动态库等构建产物
14. 当修改了CMakeLists.txt文件时，需要重新加载CMake项目才能正常应用新的修改
15. cmake-build-debug文件夹可以被视为构建系统的工作目录，其中包含了构建过程中所需的各种文件（上传代码至GitHub时，不推荐上传该文件夹）