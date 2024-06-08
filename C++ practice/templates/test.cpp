#include<iostream>
template<typename T>
T add(T a, T b)
{
    return a + b;
}
int main()
{
    int result1 = add(5,10);
    float result2 = add(5.3,10.2);

    std::cout<<"res1 = "<< result1<<std::endl;
    std::cout<<"res2 = "<< result2<<std::endl;

}