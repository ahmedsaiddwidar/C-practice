#include <iostream>

class number
{
    public:
    number(int n): m_n(n)
    {

    }
    int get_n(void)
    {
        return m_n;
    }

    private:
    int m_n;
};
class page
{
    public:
    page(number p_n): n(p_n)
    {
        std::cout << "page number is" << n.get_n() << "\n";
    }

    private:
    number &n;
};
class book
{
    public:

    book(number pn,page &page): n(pn), m_page(page)
    {
        std::cout << "book number " << n.get_n() << "\n";
    }
    private:
    number &n;
    page &m_page; // weak containmenet
};
class Engine
{
    public: 
    Engine()
    {
        std::cout << "Engine 115 horse power\n";
    }

    void OnVehicle()
    {
        std::cout << "ON\n";
    }
};
class BMW
{
    public:
    BMW();
};
class Vehicle
{
    public:
    Vehicle()
    {
        engine = new Engine();
    }
    friend BMW;
    private:
    Engine *engine;
};
BMW::BMW()
{
   Vehicle vehicle;
   vehicle.engine->OnVehicle();
}
int main()
{
    number n(8); //paramterized constructor

    page page(n);
    book book(n, page);
    
    auto number = n.get_n();
    return 0;
}
