﻿// ConsoleApplication4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
    std::cout << "boot:\t\t" << sizeof(bool) << "bytes" << std::endl;
    std::cout << "char:\t\t" << sizeof(char) << "bytes" << std::endl;
    std::cout << "short:\t\t" << sizeof(short) << "bytes" << std::endl;
    std::cout << "int:\t\t" << sizeof(int) << "bytes" << std::endl;
    std::cout << "long:\t\t" << sizeof(long) << "bytes" << std::endl;
    std::cout << "long long:\t" << sizeof(long long) << "bytes" << std::endl;
    std::cout << "float:\t\t" << sizeof(float) << "bytes" << std::endl;
    std::cout << "double:\t\t" << sizeof(double) << "bytes" << std::endl;
    std::cout << "long double:\t" << sizeof(long double) << "bytes" << std::endl;
}




