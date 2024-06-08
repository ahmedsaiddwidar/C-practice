#include<iostream>
using namespace std;

class car
{
    private:
    string  company;
    string model;
    int year;

    public:
    car(string& betrieb, string& modal, int jahr): company(betrieb), model(modal), year(jahr){}

    string getCompany() {
        return company;
    }

    string getModel() {
        return model;
    }

    int getYear() {
        return year;
    }


    void setCompany(const string & comp) {
        company = comp;
    }

    void setModel(const string & mdl) {
        model = mdl;
    }

    void setYear(int yr) {
        year = yr;
    }

};

int main()
{
    string name = "AUDI";
    string model = "A6";
     car car(name, model, 2023);

  // Get and display the car details
  cout << "Company: " << car.getCompany() << endl;
  cout << "Model: " << car.getModel() << endl;
  cout << "Year: " << car.getYear() << endl;

  // Set new values for the car
  car.setCompany("BMW");
  car.setModel("M4");
  car.setYear(2022);

  // Get and display the updated car details
  cout << "\nUpdated Company: " << car.getCompany() << ::endl;
  cout << "Updated Model: " << car.getModel() << endl;
  cout << "Updated Year: " << car.getYear() << endl;

    return 0;
}