#include <iostream>
using namespace std;

class polygon
{
    public:
    virtual void show(void)
    {
        cout<< "it is a polygon\n";
    }
};    
class triangle : public polygon
{
    public:
    void show(void)
    {
        cout<<"triangle is a 3 sided polygon\n";
    }

};
class Rectangle : public polygon 
{
    public:
    void show() {
        cout<<"Rectangle is 4 sided polygon"<<endl;
    }
};

int main()
{
    polygon *p;
    triangle t;
    p = &t;
    p->show();

    Rectangle r;

    p = &r;
    p->show();

    return 0;
}