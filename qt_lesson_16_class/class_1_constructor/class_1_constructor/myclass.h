#ifndef MYCLASS_H
#define MYCLASS_H
#include <iostream>

class MyClass
{
public:
    MyClass();
    MyClass(int _x);
    MyClass(int _x, int _y);
    MyClass(int _x, int _y, int _z);

    int x;
    int y;
    int z;


};

#endif // MYCLASS_H
