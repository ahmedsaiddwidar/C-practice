#include<iostream>

int main()
{
int a = 8;
int b = 7;

auto lambda = [a,b]() -> int {return a + b;};
int result = lambda();

std::cout << result;
return 0;
}