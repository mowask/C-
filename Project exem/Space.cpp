#include "Space.h"

Space& Space::operator++()
{
    ++x;
    ++y;
    ++z;
    // returned value should be a reference to *this
    return *this;
}

/*
Символ оператора для префикса (++i) и постфикса (i++) один и тот же. Следовательно, нам нужны два разных определения функций, чтобы различать их. Это достигается путем передачи фиктивного параметра int в постфиксной версии.
*/
Space Space::operator++(int)
{
    // returned value should be a copy of the object before decrement
    Space temp = *this;
    ++x;
    ++y;
    ++z;
    return temp;


}
