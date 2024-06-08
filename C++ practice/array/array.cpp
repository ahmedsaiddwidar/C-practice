#include<iostream>

int main()
{
char word[6] = {'H','E','L','L','O'};
for(char element : word)
{
    std::cout<<"element: "<<element<<std::endl;
}
for(char &element : word)
{
    element =  'a';
}
for(char element : word)
{
    std::cout<<"element: "<<element<<std::endl;
}
    return 0;
}