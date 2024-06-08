#include<iostream>

namespace n1
{
    int add(int x, int y)
    {
        return x + y;
    }

    int a = 5;
}
namespace n2
{
    void print_your_name(void)
    {
        std::string d = "ahmed";
        std::cout<< "my name is " << d<<'\n';

    }
}
int add(int a, int b)
{
    return a + b;
}

int main()
{
    int a = 2, b = 3;
    
    std::cout<<"the result = "<<n1::add(a,b)<<std::endl;

    n2::print_your_name();

    std::cout<<add(5,7)<<std::endl;


    return 0;
}