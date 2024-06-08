#include<iostream>
#include<array>
#include<functional>
#include<cstdlib>

// void calculate(const std::array<int , 10>list,const std::function<void (int)>&calculate_square,const std::function<void (int)>&calculates_cube)
// {
//     for(const auto &num : list)
//     {
//         if(num % 2 == 0)
//         {
//             calculate_square(num);
//         }
//         else{
//             calculates_cube(num);
//         }
//     }
// }

// int main()
// {
//     std::array<int , 10>list_num;

//     for(auto i = 0; i< 10; i++)
//     {
//         list_num[i] = i;
//     }

//     auto lambda_square = [](int num) -> void{std::cout<< "num = "<<num <<" "<< "square = "<< num*num<<std::endl;};
//     auto lambda_cube = [](int num) -> void{std::cout<< "num = "<<num<<" "<< "cube = "<< num*num*num<<std::endl;};

//     calculate(list_num,lambda_square,lambda_cube);


//     return 0;
// }
void claculate(std::array<int ,10>list,const std::function<void (int)>clac_square,const std::function<void (int)>calc_cub)
{
    for(auto num:list)
    {
        if(num % 2 == 0)
        {
            clac_square(num);
        }
        else
        {
            calc_cub(num);
        }
    }
}

int main()
{
    std::array<int ,10> a;
    for (int i = 0; i < 10;i++)
    {
        a[i] = i;
    }
    auto lambda_square = [](int n) -> void {std::cout<< "n = "<< n*n<<std::endl;};
    auto lambda_cube = [](int n) -> void {std::cout<< "n = "<< n*n*n<<std::endl;};
    claculate(a,lambda_square,lambda_cube);
}