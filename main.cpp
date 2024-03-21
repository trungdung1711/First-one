#include <iostream>
#include "Person.h"


int main()
{
    Person* me{ new Person("TD",19,1) };
    me->eat();
    me->play();
    me->talk();
    delete me;
    return 0;
}