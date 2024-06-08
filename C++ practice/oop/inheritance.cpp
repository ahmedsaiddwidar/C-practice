#include<iostream>

class electronicDevice
{
    public:
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


    std::uint16_t getPrice(void)
    {
        return this ->price;
    
    }
    protected:

    std::string getModel(void)
    {
        return this ->model;
    }
    std::string getBrand(void)
    {
        return this ->brand;
    }

    private:
    std::string model;
    std::string brand;
    std::uint16_t price;

};
class computer : public electronicDevice
{
    public:
    void displaySpecs()
    {
        std::cout<< getModel()<<" "<< getBrand()<< "\n"; // error getPrice out of the inherited class scope
    }

};

int main()
{
    std::string brand = "iphone13";
    std::string model = "2019";
    std::uint16_t price = 10000;

    electronicDevice mobile;

    mobile.setBrand(brand);
    mobile.setModel(model);
    mobile.setPrice(price);

        return 0;
}