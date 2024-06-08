#include<iostream>
#include<array>
#include<algorithm>

int main()
{
    int a = 8;
    int b = 7;

    std::array<int , 10>list;

    list.fill(1);

    auto lambda = [&] () -> void 
    {
        for(auto element : list)
        {
            element +2;
            std::cout << "element = "<< element<<std::endl;
        }
    };

    auto print_ab = [=] () -> void 
    {
        std::cout << "a = "<< a<<" "<<"b = "<< b<<std::endl;
    
    };

    auto edit_a = [&a] () -> void 
    {
        a = 5;
        std::cout << "a = "<< a<<std::endl;
    
    };

    auto edit_b = [b] () -> void 
    {

        std::cout << "b = "<< b<<std::endl;
    
    };

    std::for_each(list.begin(), list.end(), [](int &element)-> void
    {
        element +=2;
    });

    lambda();
    print_ab();
    edit_a();
    edit_b();

    return 0;
}