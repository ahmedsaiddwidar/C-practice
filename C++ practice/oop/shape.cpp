#include <iostream>
#include <algorithm>
using namespace std;

class shape
{
    public:
    virtual void draw() = 0;
};
class circle : public shape
{
    public:
    void draw(void)
    {
        cout<< "draw a circle\n";
    }

};
class Rectangle :  public shape
{
    public:
        void draw()
        {
            cout << "draw a rect" << endl;
        }

};
int main()
{
    circle c;
    c.draw();

    Rectangle r;
    r.draw();

    shape *p;

    p = &c;
    p->draw();
    return 0;
}