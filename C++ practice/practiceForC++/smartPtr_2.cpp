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
    shared_ptr<shape> unqPtr(new shape(5,6));
    cout<<unqPtr->area()<<endl;

    shared_ptr<shape> p= unqPtr;

   cout<<p->area()<<endl;
    
}