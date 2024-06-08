#include<iostream>

class electronicDevice
{
    public:
    // default constructor
    electronicDevice()
    {
        std::cout << "constructor is called\n";
    }
    // default destructor
    ~electronicDevice()
    {
        std::cout << "destructor is called\n";

    }

    
    void setPrice(std::uint16_t price)
    {
        this ->price = price;
    }
    void setModel(std::string model)
    {
        this ->model = model;
    }
    void setBrand(std::string brand)
    {
        this ->brand = brand;
    }
    void printBrand(std::string brand)
    {
        this ->brand = brand;
        std::cout<< brand<<"\n";
    }
        void printPrice(std::uint16_t price)
    {
        this ->price = price;
        std::cout<< price<<"\n";
    }
        void printModel(std::string model)
    {
        this ->model = model;
        std::cout<< model<<"\n";
    }

    private:
    std::string model;
    std::string brand;
    std::uint16_t price;

};

void useElectronics(void)
{
    std::string brand = "iphone13";
    std::string model = "2019";
    std::uint16_t price = 10000;

    electronicDevice mobile;

    mobile.setBrand(brand);
    mobile.setModel(model);
    mobile.setPrice(price);

    mobile.printBrand(brand);
    mobile.printModel(model);
    mobile.printPrice(price);
}
int main()
{
useElectronics();
        return 0;
}