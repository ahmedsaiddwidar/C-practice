#include<iostream>
using namespace std;

class person
{
    private:
    string name;
    int age;
    string country;

    public:

   // person(string name,int age, string country): name(name),age(age), country(country){} 

    void set(int alt)
    {
        this->age = alt;
    }
    void set_name(string namen)
    {
        this->name = namen;
    }
    void set(string land)
    {
        this->country = land;
    }

    int get_age(void)
    {
        return this->age;
    } 
    string get_name(void)
    {
        return this->name;
    }     
    string get_country(void) // cannot overload functions distinguished by return type alone
    {
        return this->country;
    } 
    


};

int main()
{
/*
    person p("Ahmed",25,"Egypt");
    string name = p.get_name();
    int age = p.get_age();
    string country = p.get_country();
*/
    person p;
    p.set(25);
    p.set("Egypt");
    p.set_name("Ahmed");

    int age = p.get_age();
    string name = p.get_name();
    string country = p.get_country();


    cout <<"the name = "<<name<<"\tthe age = "<<age<< "\tthe country = "<<country<<endl;

    return 0;
}