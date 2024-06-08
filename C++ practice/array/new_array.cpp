#include<iostream>
#include<array>

int main()
{
std::array<int, 5>arr;
std::array<int, 5>list = {1,2,8,7,9};
std::array<int, 5u>::iterator it; // auto keyword : assign the value to its appropirate data type

for(it = list.begin(); it != list.end(); it++ )
{
    *it = 100;
}
arr.fill(1);

list.swap(arr);
for(char i = 0; i < arr.size(); i++)
{
    std::cout<< list[i]<<' ';
}
std::cout<<std::endl;
for(int element : arr)
{
    std::cout<< element<<std::endl; // we could use std::sort(arr_name.begin(),  arr_name.end())
}
    return 0;
}