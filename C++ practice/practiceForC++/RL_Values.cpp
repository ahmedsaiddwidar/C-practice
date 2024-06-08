#include<iostream>

void printName(const std::string &name) // L-value reference and we made it cons to accept R value either
{
    std::cout<<name<<std::endl;
}

void printName(std::string &&name) // R-value reference 
{
    std::cout<<name<<std::endl;
}

int main()
{
    std::string firstName = "ahmed";
    std::string lastName = "saeed";

    std::string fullName = firstName + lastName;

    //printName(fullName); // error in case we use R-value reference 
    printName(firstName + lastName);
    printName(firstName + lastName);
}