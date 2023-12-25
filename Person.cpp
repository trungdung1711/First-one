#include "Person.h"
#include <iostream>

Person :: Person(std:: string name, int age, bool sex): m_name {name}, m_age{age}, m_sex{sex}
{
    std:: cout << "Human created\n";
}



void Person :: talk()
{
    std:: cout << "fuck\n";
}



void Person :: eat()
{
    std:: cout << "delicious\n";
}



void Person :: play()
{
    std:: cout << "funny\n";
}



Person :: ~Person()
{
    std:: cout << "I am dead\n";
}

