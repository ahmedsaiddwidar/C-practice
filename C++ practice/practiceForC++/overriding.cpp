#include<iostream>

class shape
{
    public:

    void printShape(void)
    {
        std::cout<<"shape"<<std::endl;
    }
};

class square : public shape
{
    public:
    
    void printShape(void)
    {
        std::cout<<"square"<<std::endl;
    }
};
int main()
{
    shape shape;
    square square;

    shape.printShape();
    square.printShape();

    return 0;
}