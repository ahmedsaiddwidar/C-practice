#include<iostream>

class circle
{
    public:
    int r;
    float cir;
    float area;

    virtual void display (void) = 0;

};
class calculation : public circle
{
    public:
    void display (void)
    {
        std::cout << "the circ = "<<cir<< "\tthe area = "<<area<<std::endl; 
    }
};

int main()
{
    circle *x; // object of abstract class type "circle" is not allowed
    calculation y;
    y.r = 5;
    y.cir =2 * 3.14 * y.r;
    y.area =3.14 * y.r * y.r;
    
    y.display();


    return 0;
}