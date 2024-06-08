#include<iostream>
#include<vector>
#include<functional>

//whenever i have a function pointer i can use a lambda instead it is simbly we define a function without acually defining a function

void forEach(const std::vector<int>& values, const std::function<void(int)>& func) 
{
    for (int value : values)
        func(value);
}
int main()
{
    std::vector<int>values = {1,2,3,4,5};

    int a = 6;
    auto lambda = [/* captures*/ a](/*parameters*/ int value){/*implementation*/std::cout<<"a = "<<a<<std::endl;};
    forEach(values,lambda);
}