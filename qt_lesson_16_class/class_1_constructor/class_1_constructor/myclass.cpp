#include "myclass.h"

MyClass::MyClass()
{
    std::cout << "My class start" << std::endl;
}

MyClass::MyClass(int _x)
{
    x = _x;
    std::cout << "x: " << x << std::endl;
}

MyClass::MyClass(int _x, int _y)
{
    x = _x;
    y = _y;
    std::cout << "x: " << x << std::endl;
    std::cout << "y: " << y << std::endl;
}

MyClass::MyClass(int _x, int _y, int _z)
{
    x = _x;
    y = _y;
    z = _z;
    std::cout << "x: " << x << std::endl;
    std::cout << "y: " << y << std::endl;
    std::cout << "z: " << z << std::endl;
}


