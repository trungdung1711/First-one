#include "Person.h"
#include <iostream>

Person :: Person(std:: string name, int age, bool sex): m_name {name}, m_age{age}, m_sex{sex}
{
    std:: cout << "Human born\n";
}



void Person :: talk()
{
    std:: cout << "Hi\n";
}



void Person :: eat()
{
    std:: cout << "Delicious\n";
}



void Person :: play()
{
    std:: cout << "Funny\n";
}



Person :: ~Person()
{
    std:: cout << "I am dead\n";
}

