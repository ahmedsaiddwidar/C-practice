#include<iostream>
#include <memory>

using namespace std;

class shape
{
    int length;
    int width;
public:
    shape(int l, int w)
    : length(l), width(w)
    {

    }
    int area() {return length * width;}
};

int main()
{
    unique_ptr<shape> unqPtr(new shape(5,6));
    cout<<unqPtr->area()<<endl;

    //unique_ptr<shape> p= unqPtr; error

    unique_ptr<shape>p1;
    p1 = move(unqPtr);
    cout<<p1->area()<<endl;
    
}