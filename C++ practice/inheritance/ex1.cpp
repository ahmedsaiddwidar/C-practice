#include <iostream>
#include <vector>
#include<array>

class pageObject
{
    public:
    virtual void addItem(pageObject a);
    virtual void removeItem();
    virtual void deleteItem(pageObject a);
};

class page : public pageObject
{
    public:
    void addItem(pageObject a)
    {
        std::cout << "item added to the page";
    }
    void removeItem()
    {
        std::cout << "item removed from the page";
    }
    void deleteItem(pageObject a)
    {
        std::cout << "item deleted from the page";
    }
};

class copy : public pageObject
{
    public:
    std::vector<pageObject> copyPages;

    void addElement(pageObject a)
    {
        copyPages.push_back(a);
    }
    void addItem(pageObject a)
    {
        std::cout << "item added to the page";
    }
    void removeItem()
    {
        std::cout << "item removed from the page";
    }
    void deleteItem(pageObject a)
    {
        std::cout << "item deleted from the page";
    }

};
int main() {
   page p1;
   page p2;

   copy myCopy;

   myCopy.addElement(p1);
   myCopy.addElement(p2);

   myCopy.addItem(p1);

   p1.addItem(p2);
   
   myCopy.removeItem();
   p2.removeItem();

   return 0;
}