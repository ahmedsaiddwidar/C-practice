#include<iostream>
#include<array>

int main()
{
    std::array<int,5>ahmed;

    //ahmed a ;
    ahmed[0] = 1;
    ahmed[1] = 2;
    ahmed[2] = 3;
    ahmed[3] = 4;
    ahmed[4] = 5;
    // for (int i = 0; i < 5; i++)
    // {
    //     std::cout<<ahmed[i]<<std::endl;
    // }

    // ahmed.fill(5);
    //     for (int i = 0; i < 5; i++)
    // {
    //     std::cout<<ahmed[i]<<std::endl;
    // }
    std::cout<< ahmed.size();
}