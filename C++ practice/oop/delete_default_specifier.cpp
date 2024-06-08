#include<iostream>

class X
{
int i = 4;
int j {5};
public:
X(int a) : i{a} {} // i = a, j = 5
X() = default; // i = 4, j = 5 we tell compiler to generate default constructor 
};

class X{
public:
X(int) = delete;
X( double ){}
};

int main()
{
    X x2(3.14); // valid
    X x1(2.4); // if it is 10 it is not valid we cant pass int
    return 0;
}