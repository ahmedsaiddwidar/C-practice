#include<iostream>

int main()
{
int var = 8;
int *ptr = &var;

*ptr = 155;

std::cout<<"var value = "<<var<<"\npointer value"
<<ptr<<"\naddress value = "<<&var<<std::endl;

    return 0;
}