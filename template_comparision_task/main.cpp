// ConsoleApplication7.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
#include <string>
#include "NewA.h"
#include "NewB.h"


int main()
{
    NewA a1(1, 2);
    NewA a2(2, 3);
    std::cout << (a1 >= a2) << (a1 <= a2) << (a1 == a2) << (a1 != a2) << std::endl;
    std::cout << (a1 >= 4.0) << (a1 <= 4.0) << (a1 == 4.0) << (a1 != 4.0) << std::endl;
    NewB b1("abcd");
    NewB b2("abc");
    std::cout << (b1 >= b2) << (b1 <= b2) << (b1 == b2) << (b1 != b2) << std::endl;
    NewA a3(105, 106);
    char a = 'a';
    std::cout << (a3 >= a) << (a3 <= a) << (a3 == a) << (a3 != a) << std::endl;
}

