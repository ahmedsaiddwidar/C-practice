#include<iostream>
#include<string>

class employee
{
    public:

    employee(int id, int salary, int age, std::string title)
    : m_id(id), m_salary(salary), m_age(age), m_title(title) // initializer list
    {
       //m_id = id;
       //m_salary = salary;
       //m_age = age;
       //m_title = title;

    }
    
    employee(const employee &other_employee) //copy_constructor
    {
        this->m_id = other_employee.m_id;
        this ->m_salary = other_employee.m_salary;
        this ->m_age = other_employee.m_age;
        this ->m_title = other_employee.m_title;
    }
    void display()
    {
        std::cout <<"id = "<<m_id<<std::endl
        <<"salary = "<<m_salary<<std::endl
        <<"age = "<<m_age<<std::endl
        <<"title = "<<m_title<<std::endl;
    }

    private:

    int m_id;
    int m_salary;
    int m_age;
    std::string m_title;
};

int main()
{
    std::string profession = "senior";
    employee emp(1000,2000,25,profession);
    
    emp.display();

    employee employee2 (emp);
    employee2.display();

    return 0;
}