#include<iostream>

int main()
{
    int *p = new int;
    *p = 5;
    std::cout<<*p; // *p = new int(5)

    delete p;
    return 0;
}