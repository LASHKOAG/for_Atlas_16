#include <stdio.h>
#include <string.h>

using namespace std;

struct Car
{
    int speed;
    int engine;
private:
    float doors;
};

int main()
{
    Car bmw;

    bmw.speed = 10;
    //bmw.doors = 4.5;
    bmw.engine = 567;

    int _local_speed = 0;
    int _local_engine = 0;


    printf("local speed: %d\n", _local_speed);

    //char str[] = "fjkdfjk\0";

    //strlen(str); //7
    //printf("strlen(str): %d\n", strlen(str));

    memcpy(&_local_speed, &bmw.speed, sizeof(_local_speed));

    printf("local speed: %d\n", _local_speed);

    memset(fgfg, 0, );


    return 0;
}
