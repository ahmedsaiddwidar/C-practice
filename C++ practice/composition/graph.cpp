#include <vector>
#include <iostream> 
#include <algorithm> 
#include <functional>  //mem_func

using namespace std;

class graphic
{      
    public:
    virtual void draw() const = 0; //pure virtual function
    virtual void remove(graphic *g) {}
    virtual void add(graphic *g) {}
    virtual void getChild(int) {}
    virtual ~graphic() {} //virtual destructor
};
class Line : public graphic 
{
public:
  void draw() const
  {
    cout << "Line draw()\n";
  }
};
class Rectangle : public graphic 
{
public:
  void draw() const {
    cout << "Rectangle draw() \n";
  }
};
class Text : public graphic 
{
public:
  void draw() const {
    cout << "Text draw() \n";
  }
};
class picture : public graphic
{
    public:
    void draw() const{
        for_each(gList.begin(), gList.end(), mem_fun(&graphic::draw));
    }
      void remove(graphic *g) 
  {
    gList.erase(std::remove(gList.begin(), gList.end(), g));
  }

  void add(graphic *aGraphic) {
    gList.push_back(aGraphic); 
  }
    private:
    vector<graphic*> gList;  //aggregation
};
int main()
{
  Line line;
  Rectangle rect;
  Text text;

/*
  line.draw();
  rect.draw();
  text.draw();
*/
  picture pic;
  pic.add(&line); 
  pic.add(&rect);
  pic.add(&text);
  pic.add(&rect);
  pic.draw();

  return 0;
}