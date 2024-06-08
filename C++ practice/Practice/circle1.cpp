#include<iostream>

const float pi = 3.14;

class circle
{
    private:
    double radius;

    public:
    circle(double rad) : radius(rad){}

    double calculateArea()
    {
       double area = radius*radius * pi;
        return area;
    }

    double calculateCircumfrance()
    {
       double circ = 2*radius * pi;
        return circ;
    }

};

int main()
{
    double r = 5;

    circle circle(r);

    double area = circle.calculateArea();
    double circumfrance = circle.calculateCircumfrance();

    std::cout << "the area = "<< area<<"\t the circumfrance = "<< circumfrance<<std::endl;


    return 0;
}