#include<iostream>
#include<vector>

void print_value(int value)
{
    std::cout<<"value = "<<value<<std::endl;
}
void forEach(const std::vector<int>values, void (*fun_ptr)(int))
{
    for(auto value : values)
    {
        fun_ptr(value);
    }
}

int main()
{
    std::vector<int> values = {1,2,3,4,5};
    forEach(values,print_value);

    return 0;
}