#include <iostream>
#include "H:\Uczenie\Calculator\function.h"

int calc(int x, int y)//Adding
{
     return x+y;
};
int calc(short x, short y)//Substract
{
    return x-y;
};
int calc(double x, double y)//Multiply
{
    return x*y;
};
float calc(float x, float y)//Divide
{
    if(y<0)
        std::cout << "Divider can't be 0 \n";
    else
        return x/y;
};
