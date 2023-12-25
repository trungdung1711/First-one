#ifndef PERSON_H
#define PERSON_H
#include <string>
class Person 
{
    private:
    std:: string    m_name{};
    int             m_age{};
    bool            m_sex{};



    public:
    Person(std:: string name, int age, bool sex);

    void            talk();
    void            eat();
    void            play();

    ~Person();

};
#endif