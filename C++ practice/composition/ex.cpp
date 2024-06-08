#include<iostream>
#include<vector>
#include <array>

class pageObject 
{
    public:

    virtual void addItem(){}
    virtual void removeItem(){}
    virtual void deleteItem(){}

};

class page : public pageObject
{
    public:
    void addItem(pageObject a)
    {
        std::cout << "Item added into the page" << std::endl;
    }
    void removeItem() 
    {
        std::cout << "Item Removed from page" << std::endl;
    }
    void deleteItem(pageObject a) 
    {
        std::cout << "Item Deleted from Page" << std::endl;
    }
};

class Copy : public pageObject {
   std::vector<pageObject> copyPages;
   public:
      void AddElement(pageObject a) {
         copyPages.push_back(a);
      }
      void addItem(pageObject a) {
         std::cout << "Item added to the copy" << std::endl;
      }
      void removeItem() {
         std::cout << "Item removed from the copy" << std::endl;
      }
      void deleteItem(pageObject a) {
         std::cout << "Item deleted from the copy";
      }
};

int main() {
   page p1;
   page p2;

   Copy myCopy;

   myCopy.AddElement(p1);
   myCopy.AddElement(p2);

   myCopy.addItem(p1);

   p1.addItem(p2);
   
   myCopy.removeItem();
   p2.removeItem();
}


int mmain()
{

    return 0;
}