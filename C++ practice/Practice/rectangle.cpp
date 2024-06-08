#include<iostream>
using namespace std;

class rectangle
{
    private:
    int length;
    int width;

    public:
    rectangle(int len, int wid): length(len), width(wid){}

    long area(void)
    {
        return length * width;
    }

    long perimeter(void)
    {
        return 2* (length + width);
    }
};

int main()
{
    int l = 10;
    int w = 8;

    rectangle r(l,w);

    long area = r.area();
    long permieter = r.perimeter();

    cout<<"area = "<< area<<"\t permieter = "<< permieter<< endl;



    return 0;
}