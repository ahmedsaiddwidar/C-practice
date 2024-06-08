#include<iostream>
#include<algorithm>
#include<array>

int main()
{
int a = 8;
int b = 7;

std::array <int , 10> list;
list.fill(1);

auto lambda = [&list]() -> void
{
    for(auto element : list)
    {
        std::cout<<element<<std::endl;
    }

};

std::for_each(list.begin(), list.end(), [](int &element) -> void
{
    element +=2;
}
);
lambda();

return 0;
}