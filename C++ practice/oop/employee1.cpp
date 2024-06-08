#include<iostream>

class student
{
    public :
    
    student(int id, int age, std::string name)
    : m_id(id), m_age(age), m_name(name)
    {
        std::cout << "student Id: " << m_id <<" age:" << m_age
        <<" name:" << m_name << std::endl;    
    }
    void set_id(int id)
    {
        this ->m_id;
    }
    int get_id(void)
    {
        return m_id;
    }
    void enroll(std::string course)
    {
        std::cout << "student Id: " << m_id << " enrolled in " << course << std::endl;
    }
        void withdraw(std::string course)
    {
        std::cout << "student Id: " << m_id << " enrolled in " << course << std::endl;
    }

    private:
    int m_id;
    int m_age;
    std::string m_name;
};

int main()
{
    student firstStudent (1,20,"ahmed");
    student secondStudent (5,40,"saeed");
    student thirdStudent (7,60,"mahmoud");


    firstStudent.set_id(24);
    std::cout<<firstStudent.get_id() << std::endl;

    return 0;
}