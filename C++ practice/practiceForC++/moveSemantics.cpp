#include<iostream>
#include<string.h>

class   String
{
public:
    String() = default;

    String(const char *String)
    {
        printf("created!\n");
        m_size = strlen(String) + 1;
        m_data = new char(m_size);

        memcpy(m_data,String,m_size);
    }
    //////////////////////////////
        String(const String &other)
    {
    printf("copied!\n");
    m_size = other.m_size + 1;
    m_data = new char(m_size);

    memcpy(m_data,other.m_data,m_size);
    }
    ////////////////////
    void print(void) const
    {
    for(uint32_t i = 0; i< m_size - 1;i++)
    {
        printf("%c",m_data[i]);
    }
    printf("\n");
    }
    ///////////////////////
    String(String && other) // rValue reference
    {
    printf("movied!\n");
    m_size = other.m_size + 1;
    m_data = other.m_data;

    other.m_size = 0;
    other.m_data = nullptr;
    }
    ~String()
    {
        printf("destroyed!\n");
        delete(m_data);
    }
private:
    uint32_t m_size;
    char * m_data;
};

class entity
{
public:
    entity(const String& name)
    :m_name(name)
    {

    }
    entity(const String&& name) noexcept
    :m_name((String&&)name)
    {

    }
    void printName(void)
    {
        m_name.print();
    }
private:
    String m_name; 
};

int main()
{
    entity ent("ahmed");
    ent.printName();

    std::cin.get();
}