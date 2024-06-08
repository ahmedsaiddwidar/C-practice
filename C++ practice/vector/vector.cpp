#include<iostream>
#include<vector>

void output_vect(const std::vector<int>&firstVector)
{
    for(auto item : firstVector)
    {
        std::cout<< item<<"\n";
    }
    
}

void input_vect(std::vector<int>&firstVector)
{
    for(auto &item : firstVector)
    {
        std::cin>>item;
    }
    
}
int main()
{
    std::vector<int>v(3);  // std::vector<int>v(3,4) means three elements treir values are 4, the capicity increases by 3 every time i push an element;
    input_vect(v);

    v.push_back(7);
    v.push_back(9);


    output_vect(v);



    return 0;
}